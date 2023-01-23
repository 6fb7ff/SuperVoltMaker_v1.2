using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class CardModel
{
    public int cardID;
    public string name;
    public int cost;
    public int volt;
    public int eco;
    public int range;
    public Sprite icon;
    public int ID2;

    public CardModel(int cardID)
    {
        CardEntity cardEntity = Resources.Load<CardEntity>("CardEntityList/Card" + cardID);
        
        ID2 = cardID;
        cardID = cardEntity.cardID;
        name = cardEntity.name;
        cost = cardEntity.cost;
        volt = cardEntity.volt;
        eco = cardEntity.eco;
        range = cardEntity.range;
        icon = cardEntity.icon;
    }
}