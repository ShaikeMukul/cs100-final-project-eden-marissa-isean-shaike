#ifndef __ACTIONS_H__
#define __ACTIONS_H__

#include <iostream>
#include <string>

using namespace std;

class Actions {
  protected:
    double healthOutput;
    double damageOutput;
    string actionDescription;
    string title;

  public:
    Actions(string name, string description, double health, double damage);
    ~Actions();
    string getActionDescription();
    double getHealthOutput();
    double getDamageOutput();
    string getTitle();
};

#endif
