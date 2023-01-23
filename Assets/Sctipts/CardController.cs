using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardController : MonoBehaviour
{
    public CardView view; // カードの見た目の処理
    public CardModel model; // カードのデータを処理
    public CardMovement movement;  // 移動(movement)に関することを操作


    private void Awake()
    {
        Debug.Log(" Awake ");
        view = GetComponent<CardView>();
        movement = GetComponent<CardMovement>();
    }

    public void Init(int cardID) // カードを生成した時に呼ばれる関数
    {
        Debug.Log(" Init ");

        model = new CardModel(cardID); // カードデータを生成
        view.Show(model); // 表示
    }
    
    public void DestroyCard(CardController card)
    {
        Debug.Log(" DestroyCard ");

        Destroy(card.gameObject);
    }

    public void DropField(int cardID, int i)
    {
        Debug.Log(" DropField ");

        GameManager.instance.VoltChange(cardID,i);
        switch (cardID)
        {
            case 1: 
            case 2: 
            case 3: break;
            case 4: 
            case 5: GameManager.instance.CalcSupply(cardID,i);
                    GameManager.instance.CalcEcoPoint(cardID,i);
                    GameManager.instance.CalcCostPoint(cardID,i);
                    break;
        }

    }
}