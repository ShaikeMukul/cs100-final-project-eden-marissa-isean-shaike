#ifndef ITEMS_H
#define ITEMS_H

#include <string>

class Items{
    private:
        double healthEffect;
        double damageEffect;
        std::string itemName;
        std::string itemDescription;
    public:
        Items(std::string name, std::string description, double healthAffect, double damageAffect) : healthEffect(healthAffect), damageEffect(damageAffect), itemName(name), itemDescription(description){}
        Items() : healthEffect(0), damageEffect(0), itemName("name"), itemDescription("description") {}
        std::string getItemDescription(){ return (itemDescription);}
        std::string getItemName(){ return (itemName);}
        double getHealthEffect(){ return (healthEffect);}
        double getDamageEffect(){ return (damageEffect);}
};

#endif 
