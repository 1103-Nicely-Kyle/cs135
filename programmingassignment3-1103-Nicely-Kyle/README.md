# ProgrammingAssignment3


## Project Goals
The goal of this project is to:
1.	Familiarize students with **functions**
2.  Provide students with continued practice with **expressions** and **selection**.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```party.c```

## Program
Party time!  

We're going to create a party planning system to incorporate discount costs for larger orders.  

We’ll be getting the customer’s number of balloons and we’ll also be getting the length of streamers, and the streamer colors. We’ll do that for two orders to see which party is cheaper.

To be able to advise the user on which party is more affordable, we're going to have to make some calculations. First we'll need to determine the price of the balloons; the more you buy the less they cost! Every balloon, up to (and including) 50 costs ¢25. Any balloons more than 50 but less than (and including) 100 cost ¢15. Balloons greater than 100 only cost ¢10.  

Then we'll need to determine the price of the streamers. Regular colors, (**R**)ed, (**O**)range, (**Y**)ellow, (**G**)reen, (**B**)lue, (**P**)urple, cost ¢85 per yard. Metallic colors, (**S**)ilver and (**A**)Gold, cost $1.25 per yard. The user should enter the letters in the parenthesis to indicate their color choice.  

Finally, we can use those values to let the user know which party is the cheapest.  

### Input:
The user should be prompted for the number of balloons for the first party. They should also be prompted for a set of two values which represent the number of streamer yards and the streamer color for the first party. The user should enter both streamer values on one line, separated by a space. The user should then be prompted for the remaining party.

Example (the highlighted part is what the program displays and the italicized part is the user input):  
```PARTY 1```  
```Enter the number of your balloons: ``` *75*  
```Enter the yards and color of your streamers: ``` *10 A*  

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a “permission denied” error when attempting to run the executable, type ```chmod u+x partyExecutable``` into the terminal and try running the executable again.

## Requirements
**All keyboard input and console output should be included in the main function.**  

In addition to the main function, your program should have 2 more functions:

*calcBalloonTotal()*  
**Input Parameters**: balloon amount  
**Returned Output**: cost of all balloons  
**Functionality**: Given the number of balloons, this function should return the total cost for the balloon order.   

*calcStreamerTotal()*  
**Input Parameters**: streamer color, number of yards  
**Returned Output**: cost of streamer  
**Functionality**: Given the streamer color and number yards, this function should return the total cost for the streamer order.  

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “your commit message”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic dishonesty according to the code of this university. Academic dishonesty will not be tolerated and penalties can include cancelling a student’s enrollment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
