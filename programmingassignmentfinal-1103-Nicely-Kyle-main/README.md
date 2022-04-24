# ProgrammingAssignment10

## Project Goals
The goal of this project is to:
1.	Allow students to put together all programming and problem solving skills learned in this class.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```madlibs.c```

## Program
MADLIBS! Let's build a system loads a madlib from a file and gets the appropriate input from the user.  

The program should be run with a command line argument which indicates which file to load. For example:  

```./madlibExecutable madlib1.txt```

The input file should contain the text of the madlib on separate lines. The user input is indicated by a single capital letter on a separate line:  
A - Adjective  
N - Noun  
V - Verb  

There are two example files provided so you can understand the input format.

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a "permission denied" error when attempting to run the executable, type ```chmod u+x madlibExecutable``` into the terminal and try running the executable again.

## Requirements
Your program should be able to handle files which have a user input indicator on every other line (accomodating two or more user inputs in a row is not necessary). It should be able to prompt the user for Adjectives, Nouns, and Verbs (additional types of prompts will be extra credit). The program should be able to accept multiple words for the user input. It should display the resulting madlib on one line.

Your program should include components incorporating the following concepts from the course:

1. Command Line Arguments
2. Arrays of Strings
3. Arrays
4. Pass by Address
5. File IO
6. Iteration
7. Functions
8. Selection Statements
9. Expressions
10. Formatted IO
11. Variables

In addition to the main functions, your program should have 4 or more functions.  

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
