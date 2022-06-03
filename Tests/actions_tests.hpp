#include "gtest/gtest.h"
#include "../Headers/Actions.h"

using namespace std;

TEST(Actions, DefaultConstructor) {
	Actions test;

	EXPECT_EQ(test.getTitle(), "error: no title");
	EXPECT_EQ(test.getActionDescription(), "error: no description");
	EXPECT_EQ(test.getHealthOutput(), -999.9);
	EXPECT_EQ(test.getDamageOutput(), -999.9);
}

TEST(Actions, Attack) {
	Actions test("Slash", "*SLASH!* you cut the enemy with your sword!", -20.0, 20.0);
	
	EXPECT_EQ(test.getTitle(), "Slash");
        EXPECT_EQ(test.getActionDescription(), "*SLASH!* you cut the enemy with your sword!");
        EXPECT_EQ(test.getHealthOutput(), -20.0);
        EXPECT_EQ(test.getDamageOutput(), 20.0);
}

TEST(Actions, Heal) {
	Actions test("Healing Potion", "*GULP* you consume a healing potion.", 30.0, 0.0);

	EXPECT_EQ(test.getTitle(), "Healing Potion");
        EXPECT_EQ(test.getActionDescription(), "*GULP* you consume a healing potion.");
        EXPECT_EQ(test.getHealthOutput(), 30.0);
        EXPECT_EQ(test.getDamageOutput(), 0.0);
}

TEST(Actions, EmptyString) {
	Actions test("", "", -20.0, 20.0);

        EXPECT_EQ(test.getTitle(), "");
        EXPECT_EQ(test.getActionDescription(), "");
        EXPECT_EQ(test.getHealthOutput(), -20.0);
        EXPECT_EQ(test.getDamageOutput(), 20.0);
}
