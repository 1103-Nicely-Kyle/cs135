# ProgrammingAssignment5

## Project Goals
The goal of this project is to:
1.	Allow students to create a program which uses **File IO** and **Pass by Address**.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```height.c```

## Program
Write a program for analyzing heights. The program should prompt the user for a menu choice and either load and analyze the height data from a file or overwrite the file with new heights.  

If the user chooses to determine who's taller, the contents of the heights.txt file should be loaded and used for the analysis. If the file is not available, an error message should be displayed to the user.

If the user chooses to save new heights, they should be prompted for the person's initial, and height in feet and inches. Each of the new items should be written to the heights.txt file. If the file is not available, an error message should be displayed to the user.

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a "permission denied" error when attempting to run the executable, type ```chmod u+x heightExecutable``` into the terminal and try running the executable again.
## File Format
An example input file is provided. It should be in the following format:  
Initial Feet'Inches"

The following is an example of the file contents:
```
E 5'8"
S 6'2"
```
The following is an example of the file contents AFTER the user saves new new heights: 
```
N 5'7"
H 5'0"
```
## Requirements
*main()*  
**Functionality**: This main function should prompt the user for a menu option. It should decide, based on that menu option which actions to perform. Option 1 opens the heights.txt file for reading and checks for a successful connection to the file stream. If it can, it will load the height data, close the file, then display the appropriate result. Option 2 opens the heights.txt file for writing and checks for a successful connection to the file stream. If it can, it saves new heights, then closes the file. Any other options should result in an error message.  

In addition to the main functions, your program should have 3 more functions:  

*getMenuChoice()*  
**Input Parameters**: none  
**Returned Output**: int  
**Functionality**: This function should display to the screen the options available to the user, get the user choice, and return the users inputted menu choice to the calling function. 

*calcHeightDifference()*  
**Input Parameters**: int feet, int inches, int feet, int inches, int pointer feet result, int point inches result  
**Returned Output**: none  
**Functionality**: This function should accept two sets of height values and save the positive difference to the variables the pointers point to.  

*saveHeights()*  
**Input Parameters**: FILE pointer  
**Returned Output**: none  
**Functionality**: This function should accept a file pointer which has already been connected to a file stream. The user should be prompted for the initials and heights, in feet and inches, which should all be saved to the file.    

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
