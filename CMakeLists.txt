CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

# ADD_EXECUTABLE(mains
# 	Implementations/Actions.cpp
# 	Implementations/BossMob.cpp
# 	Implementations/Dungeon.cpp
# 	Implementations/Entities.cpp
# 	Implementations/Inventory.cpp
# 	Implementations/Items.cpp
# 	Implementations/Player.cpp
# 	Implementations/RegularMob.cpp
# 	main.cpp
# )

ADD_EXECUTABLE(test
	Implementations/Actions.cpp
	Implementations/BossMob.cpp
	Implementations/Dungeon.cpp
	Implementations/Entities.cpp
	Implementations/Inventory.cpp
	Implementations/Items.cpp
	Implementations/Player.cpp
	Implementations/RegularMob.cpp
	Tests/unit_test.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
