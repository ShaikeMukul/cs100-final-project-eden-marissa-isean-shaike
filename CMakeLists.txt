CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(mains
	Implementations/Items.cpp
	Implementations/Inventory.cpp
	Implementations/Entities.cpp
	Implementations/RegularMob.cpp
	main.cpp
)

ADD_EXECUTABLE(test
	Implementations/Inventory.cpp
	Implementations/Items.cpp
	Implementations/Entities.cpp
	Implementations/RegularMob.cpp
	Implementations/BossMob.cpp
	Tests/unit_test.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
