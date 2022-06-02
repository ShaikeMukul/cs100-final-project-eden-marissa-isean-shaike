#ifndef __ACTIONS_H__
#define __ACTIONS_H__

#include <iostream>
#include <string>

class Actions {
  protected:
    double healthOutput;
    double damageOutput;
    std::string actionDescription;
    std::string title;

  public:
    Actions();
    Actions(std::string name, std::string description, double health, double damage);
    ~Actions();
    std::string getActionDescription();
    double getHealthOutput();
    double getDamageOutput();
    std::string getTitle();
};

#endif
