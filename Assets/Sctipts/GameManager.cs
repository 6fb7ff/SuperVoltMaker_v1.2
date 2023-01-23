using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public static bool multiTouchEnabled = false, allowMultiTouch = false;


    System.Random r = new System.Random();

    [SerializeField] CardController cardPrefab;
    [SerializeField] public Transform Hand, Ocean, Land ,Mountain;
    [SerializeField] public Text NowTurnTxt,WeatherTxt,DemandTxt,SupplyTxt,CostPointTxt,PreviousUsage,CostPoint_TotalTxt,
                            NowTurnTxt_Forecast,WeatherTxt_Forecast,DemandTxt_Forecast,
                            NowTurnTxt_End, DemandTxt_End, SupplyTxt_End, CostPointTxt_End, VoltPointTxt_End, EcoPointTxt_End,
                            IDTxt_Range,VoltTxt_Range,CostTxt_Range,
                            Pass1,Pass2;
    [SerializeField] public GameObject Title,Map,Zone,Info,Forecast,End,Clear,Over,Conf,Rang,ID;
    [SerializeField] private Dropdown dropdown;
    //各ポップアップのオブジェクト

    bool process = false, publish = false;

    int[] Volt_Data      = new int[5] {1500,1000,250,500,500}, //それぞれの発電所の発電量(仮置き)
          Eco_Data       = new int[5] {10,0,10,10,10}, //それぞれの発電所のエコP(仮置き)
          Cost_Data      = new int[5] {4000,3000,5000,6250,10000}; //それぞれの発電所のコスト(仮置き)

    public int[]    WeatherData = new int[8] {0,0,0,0,0,0,0,0},
                    Volt        = new int[5] {1500,1000,250,250,500}, //それぞれの発電所の発電量(仮置き)
                    Eco         = new int[5] {0,0,10,10,10}, //それぞれの発電所のエコP(仮置き)
                    Cost        = new int[5] {4000,3000,5000,6250,10000}, //それぞれの発電所のコスト(仮置き)
                    Range       = new int[5] {1,1,1,1,1}, //それぞれの発電所の倍率(仮置き)
                    Demand      = new int[8] {0,0,0,0,0,0,0,0}, //それぞれの日の需要
                    Supply      = new int[8] {0,0,0,0,0,0,0,0}, //それぞれの日の供給
                    CostPoint   = new int[8] {0,0,0,0,0,0,0,0}, //それぞれの日の使用コスト
                    VoltPoint   = new int[8] {0,0,0,0,0,0,0,0}, //それぞれの日の発電P
                    EcoPoint    = new int[8] {0,0,0,0,0,0,0,0}; //それぞれの日のエコP

        int Weather,NowTurn,MaxTurn,CostPoint_Total; //発電量の合計,エコPの合計コストの合計
        string DemandPass = "", SupplyPass = "", CostPointPass = "", VoltPointPass = "",EcoPointPass = "",code16 = "";
        


    public void Awake()
    {
        Debug.Log(" Awake ");

        if (instance == null)
        {
            instance = this;
        }
    }

    void Start()
    {
        Debug.Log(" Start ");
        StartGame();
    }

    void StartGame()
    { 
        Debug.Log(" StartGame ");
        NowTurn = 1;
        MaxTurn = 8;     
    }

    public void Play()
    { 
        Debug.Log(" Play ");

        this.Title.SetActive (false);
        this.Map.SetActive (true);
        this.Zone.SetActive (true);
        this.Info.SetActive (true);
        TurnStart();
    }

    public  void TurnStart()
    {
        Debug.Log(" TurnStart ");
        if(!process){
            ShowDay();
            DecideWeather();
            DecideDemand();
            ShowCostPoint();
            ShowSupply();
            ShowForeCast();
            DrawCard(Hand);
            process = true;
        }          
    }

    void ShowDay() // 日数を表示するメソッド
    {
        Debug.Log(" ShowDay ");

        switch((NowTurn + 1) % 2)
        {
            case 0: NowTurnTxt.text = (((NowTurn + 1) / 2).ToString() + "日目 午前"); break;
            case 1: NowTurnTxt.text = (((NowTurn)     / 2).ToString() + "日目 午後"); break;
        }

        NowTurnTxt_End.text = NowTurnTxt.text;
    }

    void CreateCard(int cardID, Transform place)
    {
        Debug.Log(" CreateCard ");

        CardController card = Instantiate(cardPrefab, place);
        card.Init(cardID);
        card.name = "card_" + cardID;
    }

    void DecideWeather()
    {
        Debug.Log(" DecideWeather ");

        int[] p = new int[4];
        p[0] = 1;
        p[1] = 2;
        switch((NowTurn+1)/2)
        {
            case 1: p[2] = 3; break;
            case 2:
            case 3: p[2] = 3; 
                    p[3] = 5; break;
            case 4: p[2] = 4; break;
        }

        Weather = r.Next(1,p.Length);

        switch(Weather)
        {
        case 1: WeatherTxt.text = "晴れ"; break;
        case 2: WeatherTxt.text = "曇り"; break;
        case 3: WeatherTxt.text = "雨"; break;
        case 4: WeatherTxt.text = "雪"; break;
        case 5: WeatherTxt.text = "台風"; break;
        }

        WeatherData[NowTurn - 1] = Weather;

        switch(NowTurn-1)
        {
            case 0: PreviousUsage.text = "---%"; break;
            default: PreviousUsage.text = (((Supply[NowTurn -2 ] * 100 / Demand[NowTurn -2]) - 100)).ToString() + "%"; break;
        }
        
    }

    void DecideDemand()
    {
        Debug.Log(" DecideDemand ");

        switch (NowTurn)
        {
            case 1 : Demand[NowTurn - 1] = 2000 ;break;
            case 2 : Demand[NowTurn - 1] = 1500 ;break;
            case 3 : Demand[NowTurn - 1] = 3250 ;break;
            case 4 : Demand[NowTurn - 1] = 2750 ;break;
            case 5 : Demand[NowTurn - 1] = 2000 ;break;
            case 6 : Demand[NowTurn - 1] = 1500 ;break;
            case 7 : Demand[NowTurn - 1] = 5000 ;break;
            case 8 : Demand[NowTurn - 1] = 4500 ;break;
        }
        Demand[NowTurn - 1] += (UnityEngine.Random.Range(1, 6))* 100 - 300;
        DemandTxt.text = Demand[NowTurn - 1].ToString(); 
        DemandTxt_End.text = DemandTxt.text; 
    }

    void ShowCostPoint() // 表示用更新メソッド
    {
        Debug.Log(" ShowCostPoint ");

        CostPoint_Total = CostPoint.Sum(); //合計
        CostPointTxt.text = CostPoint[NowTurn - 1].ToString();
        CostPoint_TotalTxt.text = CostPoint_Total.ToString();
        CostPointTxt_End.text = CostPoint[NowTurn - 1].ToString();
    }

    void ShowSupply() // 表示用更新メソッド
    {
        Debug.Log(" ShowSupply ");

        SupplyTxt.text = Supply[NowTurn - 1].ToString();     
        SupplyTxt_End.text = Supply[NowTurn - 1].ToString();
    }

    void ShowVoltPoint() // 表示用更新メソッド
    {
        Debug.Log(" ShowVoltPoint ");

        VoltPointTxt_End.text = VoltPoint[NowTurn - 1].ToString();
    }

    void ShowEcoPoint() // 表示用更新メソッド
    {
        Debug.Log(" ShowEcoPoint ");

        EcoPointTxt_End.text = EcoPoint[NowTurn - 1].ToString();
    }

    public void ShowForeCast() // 天気予報メソッド
    {
        Debug.Log(" ShowForeCast ");

        NowTurnTxt_Forecast.text = NowTurnTxt.text;
        WeatherTxt_Forecast.text = WeatherTxt.text;
        DemandTxt_Forecast.text  = DemandTxt.text;
        this.Forecast.SetActive (true);
    }
    
    void DrawCard(Transform Hand) //カードドローメソッド
    {
        Debug.Log(" DrawCard ");

        for(int i = 1; i <= 5; i++)
        {
            switch(i)
            {
                case 4: goto case 5;
                case 5: CreateCard(i, Hand); goto case 3;
                case 3: CreateCard(i, Hand); goto case 2;
                case 1: goto case 2;
                case 2: CreateCard(i, Hand); break;
            }
        }
    }

    public void Finish()
    {
        Debug.Log(" Finish ");

        foreach (Transform child in Hand)
        {
            //削除する
            Destroy(child.gameObject);
        }

        foreach (Transform child in Ocean)
        {
            //削除する
            Destroy(child.gameObject);
        }
        
        foreach (Transform child in Land)
        {
            //削除する
            Destroy(child.gameObject);
        }

        foreach (Transform child in Mountain)
        {
            //削除する
            Destroy(child.gameObject);
        }

        if(NowTurn<MaxTurn &&  NowTurn % 2 == 0 && Demand[NowTurn -1] <= Supply[NowTurn -1])
        {
            int  Buffer =((Supply[NowTurn - 1] * 100 / Demand[NowTurn -1]) - 100); 
            if(Buffer <= 10 && Buffer > 5)
            {
                VoltPoint[NowTurn -1] = 20;
            }
            
            if(Buffer <= 5 && Buffer > 3)
            {
                VoltPoint[NowTurn -1] = 10;
            }

            if(Buffer <= 3 && Buffer >= 0)
            {
                VoltPoint[NowTurn -1] = 0;
            }

        }

        ShowDay();
        ShowSupply();
        ShowVoltPoint();
        ShowEcoPoint();
        ShowCostPoint();

        this.End.SetActive (true);
        Debug.Log("------------------");
        for(int i = 0; i < NowTurn; i++)
            {
                Debug.Log(i + 1 + "ターン目 需要 = " + Demand[i]);
                Debug.Log(i + 1 + "ターン目 供給 = " + Supply[i]);
                Debug.Log(i + 1 + "ターン目 エコP = " + EcoPoint[i]);
                Debug.Log(i + 1 + "ターン目 コスト = " + CostPoint[i]);
            }
        Debug.Log("------------------");

    }

    public void TurnEnd()
    {
        Debug.Log(" TurnEnd ");

        if (NowTurn>=MaxTurn)
        {
            GameClear();
        }

        if(Demand[NowTurn - 1] > Supply[NowTurn - 1] || NowTurn % 2 ==0 && ((((Supply[NowTurn -2 ] + Supply[NowTurn - 1]) * 100 / (Demand[NowTurn -2] + Demand[NowTurn -1])) - 100)) > 10)
        {
            GameOver();
        }

        if(NowTurn<MaxTurn && Demand[NowTurn -1] <= Supply[NowTurn -1])
        {
            process = false;   
            NowTurn++;
            TurnStart();
        }
        
    } 

    void GameClear()
    {
        Debug.Log(" GameClear ");

        this.Clear.SetActive (true);

        for(int i = 0; i < 5; i++)
        {
            Debug.Log("Volt[" + i + "] = " + Volt[i]);
            Debug.Log("Eco[" + i + "] = " + Eco[i]);
            Debug.Log("Cost[" + i + "] = " + Cost[i]);
            Debug.Log("Range[" + i + "] = " + Range[i]);
        }

        for(int i = 0; i < 8; i++)
        { 
            Debug.Log("Demand[" + i + "] = " + Demand[i]);
            Debug.Log("Supply[" + i + "] = " + Supply[i]);
            Debug.Log("CostPoint[" + i + "] = " + CostPoint[i]);
            Debug.Log("Supply[" + i + "] = " + Supply[i]);
            Debug.Log("EcoPoint[" + i + "] = " + EcoPoint[i]);
        }

        Result();
    }
    
    void GameOver()
    {
        Debug.Log(" GameOver ");

        this.Over.SetActive (true);
        Result();
    }


    public void GotoTitle()
    {
        Debug.Log(" GotoTitle ");

        SceneManager.LoadScene("Title", LoadSceneMode.Single);
        SceneManager.LoadScene("SampleScene", LoadSceneMode.Single);
        StartGame();
    }

    public void SelectRange(int ID)
    {
        Debug.Log(" SelectRange ");

        dropdown.GetComponent<Dropdown>().ClearOptions();
        dropdown.options.Add(new Dropdown.OptionData { text = "1倍[デフォルト]" });
        dropdown.options.Add(new Dropdown.OptionData { text = "2倍" });
        dropdown.options.Add(new Dropdown.OptionData { text = "3倍" });
        dropdown.RefreshShownValue();
        ShowRange(ID);
        this.Rang.SetActive (true);
    }

    public void ShowRange(int ID)
    {
        Debug.Log(" ShowRange ");

        IDTxt_Range.text   = ID.ToString();

        if(NowTurn >= 3 && ID == 3)
        {
            if(WeatherData[NowTurn - 3] == 1 && WeatherData[NowTurn - 2] == 1 && WeatherData[NowTurn - 1] == 1 )
            {
                Volt[2] = 0;
                Cost[2] = 0;
            }
        }
        VoltTxt_Range.text = Volt[ID - 1].ToString();
        CostTxt_Range.text = Cost[ID - 1].ToString();
    }

    public void GetValue(int dropdown)
    {
        Debug.Log(" GetValue ");
        
        Text IDtxt = ID.GetComponent<Text>();
        Range[int.Parse(IDtxt.text) - 1] = dropdown + 1;
        Volt[int.Parse(IDtxt.text) - 1] = Volt_Data[int.Parse(IDtxt.text) - 1] * Range[int.Parse(IDtxt.text) - 1];
        Cost[int.Parse(IDtxt.text) - 1] = Cost_Data[int.Parse(IDtxt.text) - 1] * Range[int.Parse(IDtxt.text) - 1];

        if(int.Parse(IDtxt.text) == 3)
        {
            Eco[int.Parse(IDtxt.text) - 1]  = 10;
            Cost[int.Parse(IDtxt.text) - 1] = Cost_Data[int.Parse(IDtxt.text) - 1];

            if(NowTurn >= 3)
            {
                if(WeatherData[NowTurn - 3] == 1 && WeatherData[NowTurn - 2] == 1 && WeatherData[NowTurn - 1] == 1 )
                {
                    Volt[2] = 0;
                    Cost[2] = 0;
                }
            }
        } 

        ShowRange(int.Parse(IDtxt.text));
    }

    public void PushButton_Range()
    {
        Debug.Log(" PushButton_Range ");

        Text IDtxt = ID.GetComponent<Text>();
        CalcSupply(int.Parse(IDtxt.text),0);
        CalcEcoPoint(int.Parse(IDtxt.text),0);
        CalcCostPoint(int.Parse(IDtxt.text),0);
        this.Rang.SetActive (false);
    }


    public void VoltChange(int ID, int i)
    {
        Debug.Log(" VoltChange ");

        switch (ID)
        {
            case 1:
            case 2: 
            case 3: if(i%10==0){
                        SelectRange(ID);
                    }
                    if(i%10==1)
                    {
                        CalcSupply(ID,1);
                        CalcEcoPoint(ID,1);
                        CalcCostPoint(ID,1);
                    }
                    break;
            case 4: switch( Weather )
                    {
                            case 1: Volt[4] = 500; break;
                            case 2: Volt[4] = 250; break;
                            case 3: Volt[4] = 400; break;
                            case 4:
                            case 5: break;
                    }
                    break;

            case 5: if(Weather == 5){
                        Volt[4] = 0;
                    }
                    break;
        }
    }

    public void CalcSupply(int ID, int i) // 発電量を加算する
    {
        Debug.Log(" CalcSupply ");

        switch (i%10)
        {
            case 0: Supply[NowTurn - 1] += Volt[ID - 1]; break;
            case 1: Supply[NowTurn - 1] -= Volt[ID - 1];
            Volt[ID - 1] = Volt_Data[ID - 1];
            break;
        }
        ShowSupply();
    }

    public void CalcEcoPoint(int ID, int i) // エコPを加算する
    {
        Debug.Log(" CalcEcoPoint ");

        switch (i%10)
        {
            case 0: EcoPoint[NowTurn -1] += 10; break;

            case 1: EcoPoint[NowTurn -1] -= 10;
            Eco[ID - 1] = Eco_Data[ID - 1]; break;
        }
        ShowEcoPoint();
    }

    public void CalcCostPoint(int ID, int i) // コストを加算する
    {
        Debug.Log(" CalcCostPoint ");

        switch (i%10)
        {
            case 0: CostPoint[NowTurn -1] += Cost[ID - 1]; break;
            case 1: CostPoint[NowTurn -1] -= Cost[ID - 1];
            Cost[ID - 1] = Cost_Data[ID - 1]; break;
        }
        ShowCostPoint();
    }

    public void Result() // パス発行
    {
        Debug.Log(" Result ");

        if(!publish)
        {
            for(int i = 0; i < 8; i++)
            {
                //10 ←OK
                DemandPass = DemandPass + (Demand[i] / 50).ToString("x2");
                SupplyPass = SupplyPass + (Supply[i] / 50).ToString("x2");
                CostPointPass = CostPointPass + (CostPoint[i] / 100).ToString("x2");
                VoltPointPass = VoltPointPass + (VoltPoint[i]).ToString("x2");
                EcoPointPass = EcoPointPass + (EcoPoint[i]).ToString("x2");
            }

            code16 = DemandPass + SupplyPass + CostPointPass + VoltPointPass + EcoPointPass; 

            Pass1.text = DemandPass + SupplyPass;
            Pass2.text = DemandPass + SupplyPass;

            publish = true;
        }
        
        GUIUtility.systemCopyBuffer = code16;
    }

}