#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//will have to be modified for classes, implement a strategy pattern here

void cnaslAtk() {
	int lightAtk = rand() % 3 + 1;
        //dmg = lightAtk; <- this is to record the amount of dmg you did to subtract from the enemies health

	cout << "THWACK!! Your light attack did " << lightAtk << "damage!" << endl;
}

void cnashAtk() {
	int heavyAtk = rand() % 8 + 5;
	// dmg = heavyAtk;

	cout << "BAM!! Your heavy attack did " << heavyAtk << "damage!" << endl;
}

void bcoelAtk() {
	int lightAtk = rand() % 7 + 1;
	// dmg = lightAtk;

	cout << "THWACK!! Your light attack did " << lightAtk << "damage!" << endl;
}

void bcoehAtk() {
	int heavyAtk = rand() % 12 + 5;
	// dmg = heavyAtk;

	cout << "BAM!! Your heavy attack did " << heavyAtk << "damage!" << endl;
}

void chasslAtk() {
	int lightAtk = rand() % 5 + 1;
	// dmg = lightAtk;

	cout << "THWACK!! Your light attack did " << lightAtk << "damage!" << endl;
}

void chasshAtk() {
	int heavyAtk = rand() % 10 + 5;
	// dmg = heavyAtk;

	cout << "BAM!! Your heavy attack did " << heavyAtk << "damage!" << endl;
}

int main() {
	int choice;
	srand(time(0));

};
