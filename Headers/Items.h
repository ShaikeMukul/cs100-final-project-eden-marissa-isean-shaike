#ifndef ITEMS_H
#define ITEMS_H

class Items{
    protected:
        double healthEffect;
        double damageEffect;
        std::string itemName;
        std::string itemDescription;
    public:
        Item(std::string name, std::string description, double healthAffect, double damageAffect) : healthEffect(healthAffect), healthEffect(damageAffect), itemName(name), itemDescription(description) {}
        std::string getItemDescription();
        std::string getItemName();
        double getHealthEffect();
        double getDamageEffect();
}

#endif 
