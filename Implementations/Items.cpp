#include "../Headers/Items.h"

Items::Items(std::string tagName, std::string name, std::string description, double healthAffect, double damageAffect) : healthEffect(healthAffect), damageEffect(damageAffect), itemName(name), itemDescription(description){
    if(tagName == "Consumable"){
        itemTag = Consumable;
    }
    else if (tagName == "Buff"){
        itemTag = Buff;
    }
    else if (tagName == "Debuff"){
        itemTag = Debuff;
    }
    else{
        itemTag = None;
    }
}

std::string Items::getTag(){
    if(itemTag == tags::Consumable){
        return "Consumable";
    }
    else if (itemTag == Buff){
        return "Buff";
    }
    else if (itemTag == Debuff){
        return "Debuff";
    }
    else{
        return "None";
    }
}