#ifndef ITEMS_H
#define ITEMS_H

#include <string>

class Items{
    private:
        double healthEffect;
        double damageEffect;
        String tag;
        std::string itemName;
        std::string itemDescription;
    public:
        Item(std::string name, std::string description, double healthAffect, double damageAffect) : healthEffect(healthAffect), healthEffect(damageAffect), itemName(name), itemDescription(description) {}
        std::string getItemDescription();
        std::string getItemName();
        std::string getItemTag();
        double getHealthEffect();
        double getDamageEffect();
};

#endif 
