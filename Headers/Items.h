#ifndef ITEMS_H
#define ITEMS_H

#include <string>

class Items{
    private:
        double healthEffect;
        double damageEffect;
        std::string tag;
        std::string itemName;
        std::string itemDescription;
    public:
        Item(std::string tagInput,std::string name, std::string description, double healthAffect, double damageAffect) : healthEffect(healthAffect), healthEffect(damageAffect), itemName(name), itemDescription(description), tag(tagInput) {}
        Item() : tag("tag"), healthEffect(0), healthEffect(0), itemName("name"), itemDescription("description") {}
        std::string getItemDescription(){ return (itemDescription);}
        std::string getItemName(){ return (itemName);}
        std::string getItemTag(){ return (tag);}
        double getHealthEffect(){ return (healthEffect);}
        double getDamageEffect(){ return (damageEffect);}
};

#endif 
