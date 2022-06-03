# The Dark Dungeon
Authors: [Isean Bhanot](https://github.com/IseanB), [Shaike Mukul](https://github.com/ShaikeMukul), [Eden Fraczkiewicz](https://github.com/edenfraczkiewicz), [Marissa Valencia](https://github.com/mvalencia4578)
## Project Description:
We are making a text-based RPG where you are UCR student fighting your way up the bell tower and defeating various mascots/famous figures in UCR. This RPG will let you pick between 3 colleges, CNAS, CHASS, and BCOE, each of which have different strengths and weaknesses, fight familiar enemies, and use various items like health potions. It will have 5 levels with a prize being guarded by the final boss at the top. We’re using C++ to develop this project. This is interesting to us because some of the earliest computer games were text-based RPGs and it would be cool to find out how they are actually made.

### Langauges/Tools/Technologies:
* `Valgrind` - an instrumentation framework for building dynamic analysis tools (assists in finding and checking memory leaks).
* `C++` - the main programming language that will be utilized in this project.
* `Git/Github` - git is a local version control program that interfaces with Github, a remote repository.
* `GoogleTest` - a testing framework for C++ code.
* `CMake/Make`- allows for easier compilation and testing.

### I/O:
* `input` - Single characters(letters/numbers) to interact with a menu of potential actions.
* `output` - Scene Updates, a summary of the outcome of the previous action. This can range from health updates, inventory updates, level progression, or death.

## Class Diagram

![ClassUML drawio (3)](https://user-images.githubusercontent.com/44033533/168518725-48622ee7-22b5-4257-bab1-c96568caa989.png)

There is a overlapping Entities super class that helps catgories the Players and Enemies under one class. There are also three types of players that the user can choose from: CNAS, BCOE, and CHASS. These will dictate different strengths and healths. A player object will also store Items in and Inventory, in order to be used later on in the game. There are two types of enemies a player can face: BossMob and RegularMob. The BossMob needs a bit more strategy to beat while the RegularMobs are common enemies the player will face. Finally, the Dungeon class will hold the player and enemey and interact with the two as they fight. The UserInput and UserOutput class will allow the user to interact with the Enemies and their Player.

## Design Pattern: Strategy
We decided to use the strategy design pattern in order to essentially vary the types of Entities attacks and damage calculations. In the beginning we decided the subclasses of Entites; including Player, BossMob, and RegularMob; need to have slightly different implementations of setDamage() and setHealth() inorder to have a varying level of difficulty and uniqueness WHILE also having a common interfact for those Entities. In order to solve this problem we employed the strategy pattern to specifically chose which setHealth and setDamage algorithm to use during runtime.

 
 ## Screenshots
 <img width="1394" alt="Screen Shot 2022-06-03 at 5 37 53 AM" src="https://user-images.githubusercontent.com/44033533/171855196-fa2fae8e-0b28-4c4a-a55a-d098d4994db0.png">
<img width="1052" alt="Screen Shot 2022-06-03 at 5 38 22 AM" src="https://user-images.githubusercontent.com/44033533/171855272-4bfb97d9-aa89-4499-8614-1d82118d4ab7.png">
<img width="1052" alt="Screen Shot 2022-06-03 at 5 38 39 AM" src="https://user-images.githubusercontent.com/44033533/171855331-1d1fef9c-3687-4358-9609-3fa7008cc4fe.png">
<img width="202" alt="Screen Shot 2022-06-03 at 5 39 05 AM" src="https://user-images.githubusercontent.com/44033533/171855399-0b5f5aaf-ccfc-4d6a-b3af-7689fd19825b.png">

 ## Installation/Usage
To install and run our program follow these simple steps below
1. Go into your command prompt and type "git clone --recursive https://github.com/cs100/final-project-eden-marissa-isean-shaike.git".
2. Type "cd final-project-eden-marissa-isean-shaike".
3. Now to compile it type "cmake .".

4. And type "make".
5. Now you can run the program by typing "./mains".
 ## Testing
 Our project has been tested by over 50 units tests, which are all working and have fully tested our code, as shown as the green check mark near the top of the screen.
 
