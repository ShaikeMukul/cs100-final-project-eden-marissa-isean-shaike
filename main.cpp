#include <iostream>
#include <string>
#include "Actions.cpp"

using namespace std;

int main() {
    Actions action("light attack", "POW! you performed a light attack!", -15.0, 15.0);

    cout << "Action title: " << action.getTitle() << endl;
    cout << "Action description: " << action.getActionDescription() << endl;
    cout << "Health output: " << action.getHealthOutput() << endl;
    cout << "Damage output: " << action.getDamageOutput() << endl;

    return 0;
};
