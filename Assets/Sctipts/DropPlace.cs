using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

// フィールドにアタッチするクラス
public class DropPlace : MonoBehaviour, IDropHandler
{
    public static DropPlace instance;
    public CardModel model; // カードのデータを処理
    int i;
    bool placed = false;
    
    public void OnDrop(PointerEventData eventData) // ドロップされた時に行う処理
    {
        CardController[] CardList = this.GetComponentsInChildren<CardController>(); //行き先のカード枚数
        CardController card = eventData.pointerDrag.GetComponent<CardController>(); // ドラッグしてきた情報からCardMovementを取得
        string Previous = card.movement.cardParent.ToString(); 
        if (card != null && gameObject.name != Previous.Remove(Previous.Length - 28)) // カードある、シャカパチじゃない
        {
                if(gameObject.name == "Hand" || CardList.Length < 3 && Previous.Remove(Previous.Length - 28) == "Hand")//行き先2枚以上じゃない
                {
                    switch(gameObject.name.ToString())
                        {
                            case "Hand":     i = 0 ; break;
                            case "Ocean":    i = 10; break;
                            case "Land":     i = 20; break;
                            case "Mountain": i = 30; break;
                        }

                    switch(card.model.ID2)
                    {
                        case 1: 
                        case 2: if(i==0 || i==10)
                                {
                                    card.movement.cardParent = this.transform; // 親要素を自分にする
                                    placed = true;
                                }
                                break;
                        case 3: if(i==0 || i==30)
                                {
                                    card.movement.cardParent = this.transform; // 親要素を自分にする
                                    placed = true;
                                }
                                break;
                        case 4: 
                        case 5: card.movement.cardParent = this.transform; // 親要素を自分にする
                                placed = true;
                                break;
                    }

                    if(gameObject.name != "Hand" && Previous.Remove(Previous.Length - 28) == "Hand"  && placed == true)//手札→場
                    {
                        card.DropField(card.model.ID2,i);
                        placed = false;
                    }

                    if(gameObject.name == "Hand" && Previous.Remove(Previous.Length - 28) != "Hand")//場→手札
                    {
                        i += 1;
                        card.DropField(card.model.ID2,i);
                        placed = false;
                    }
                    
                    
                }
                
                
        }
    }
}