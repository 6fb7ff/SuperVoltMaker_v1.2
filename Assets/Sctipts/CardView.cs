using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CardView : MonoBehaviour
{
    [SerializeField] Text nameText, voltText, ecoText, costText,rangeText;
    [SerializeField] Image iconImage;

    public void Show(CardModel cardModel) // cardModelのデータ取得と反映
    {
        nameText.text = cardModel.name;
        voltText.text = cardModel.volt.ToString();
        ecoText.text = cardModel.eco.ToString();
        costText.text = cardModel.cost.ToString();
        rangeText.text = cardModel.range.ToString();
        iconImage.sprite = cardModel.icon;
    }
}