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

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members

## Class Diagram
![ClassUML drawio](https://user-images.githubusercontent.com/44033533/166179522-d04c8a03-ff14-4242-a6c8-bc30f4075b76.png)

There is a overlapping Entities super class that helps catgories the Players and Enemies under one class. There are also three types of players that the user can choose from: CNAS, BCOE, and CHASS. These will dictate different strengths and healths. A player object will also store Items in and Inventory, in order to be used later on in the game. There are two types of enemies a player can face: BossMob and RegularMob. The BossMob needs a bit more strategy to beat while the RegularMobs are common enemies the player will face. Finally, the Dungeon class will hold the player and enemey and interact with the two as they fight. The UserInput and UserOutput class will allow the user to interact with the Enemies and their Player.
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design pattern(s) did you use? For each pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design pattern(s) you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
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
 
