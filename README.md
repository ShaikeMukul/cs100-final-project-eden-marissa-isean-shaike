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
We decided to use the strategy design pattern in order to vary the types of similar actions that our BossMob and Player can do. Both the BossMob and Player are going to have similar Actions; for example dodging, attacking, and using an item; however, since the boss is meant to be more powerful than the player, it will therefore have a slightly altered implementation. For example, the general implementation of a dodge Actions, class name, will mostly be the same for a BossMob and Player with the BossMob having a slightly less effective, able to be hit easier, dodge. The use of the strategy design pattern helped eliminate writing numerous paragraphs and algorithms for two similar classes.

 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
