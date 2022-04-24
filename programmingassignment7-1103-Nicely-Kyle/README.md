# ProgrammingAssignment7

## Project Goals
The goal of this project is to:
1.	Familiarize students with the use of **arrays**
2.  Familiarize students with **passing arrays to functions**.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```many_heights.c```

## Program
Write a program for analyzing heights which displays height information from a file or calculates average height for a single person. The user should be shown a menu with three options: display heights, calculate average height, or exit the program. If the user does not choose a valid option, an error message should be displayed. These options should continue to be displayed until the user chooses to exit the program.

If the user chooses to exit, the program should end. If the file is not available, an error message should be displayed to the user.

If the user chooses to display the heights, they should be displayed to the screen in a tabular format.  

If the user chooses to calculate average height, the heights should be displayed and the user should be prompted to pick an initial. That single row should be analyzed for the average height.  

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a "permission denied" error when attempting to run the executable, type ```chmod u+x manyHeightsExecutable``` into the terminal and try running the executable again.

### File Format
An input file with the correct format is included in this repository.

## Requirements
*main()*  
**Functionality**: The main function should prompt the user for a menu option until they enter 0. It should decide, based on that menu option which actions to perform. Option 0 ends the program, otherwise it should open and close the ```heights.txt``` file for reading when necessary. Option 1 will display all of the height data. Option 2 will display all of the height data and prompt a user for a initial to calculate the average of the heights in that single row. Any other options should result in an error message.    

In addition to the main functions, your program should have 4 more functions:   

*getMenuChoice()*  
**Input Parameters**: none  
**Returned Output**: int  
**Functionality**: This function should display to the screen the options available to the user, get the user choice, and return the users inputted menu choice to the calling function.  

*displayHeightData()*  
**Input Parameters**: FILE pointer  
**Returned Output**: none  
**Functionality**: This function should accept a file pointer which has already been connected to a file stream. It should display a table of height data to the screen, including the initial. 

*loadHeightData()*  
**Input Parameters**: FILE pointer, int maximum number of heights, char initial, double array of heights  
**Returned Output**: integer number of height data  
**Functionality**: This function should accept a file pointer which has already been connected to a file stream. It should save the appropriate set of heights, based on the initial, into the array. It should return to the calling function the number of height data read from the file.    

*calcAverageHeight()*  
**Input Parameters**: integer number of height data, double array of height data  
**Returned Output**: double average   
**Functionality**: This function should accept an array of height data. It should calculate the average of the heights in that array and return it to the calling function.  

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
