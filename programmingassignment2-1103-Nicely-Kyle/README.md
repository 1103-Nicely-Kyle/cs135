# ProgrammingAssignment2

## Project Goals
The goal of this project is to:
1.	Familiarize students with **selection**.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```expire.c```

## Program
Warning! Expiration date approaching! We're going to build a expiration date checker.  

The user should be prompted for a set of two dates in ```mm/dd/yyyy``` format, one for the expiration date and one for today's date. Each date's year, month, and day values can be used to determine if the expiration date has passed or to calculate the days until the expiration date is reached.

To be able to advise the user on whether or not to eat the food, we're going to have to make some decisions and calculations. First we'll need to determine if the food is expired (meaning the expiration date is earlier than today's date). If it's not expired we should warn the user how long they have left to eat the food before it does expire (find the difference, in days, between the two dates).  

Each of these scenarios requires a different output message, as illustrated in the example executable.

### Hints:
- Consider the relationship between each date's year, month, and date components when determing if the food is expired.
- Consider converting the date to a number of days before finding the difference.

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a “permission denied” error when attempting to run the executable, type ```chmod u+x expireExecutable``` into the terminal and try running the executable again.

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
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
