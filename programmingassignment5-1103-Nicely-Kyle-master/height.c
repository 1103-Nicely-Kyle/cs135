//Author: Kyle Nicely
//Date: 10/7/2021
//height

#include <stdio.h>

int getMenuChoice();
void saveHeights();
void calcHeightDifference(int,int,int,int,int*,int*);

int main() {
	printf("***HEIGHT SYSTEM***\n");
	//declare variables
	int menuChoice,feetResult,inchesResult,feet,inches,feet2,inches2,initialTaller;
	char initial,initial2;
	//get the menu choice from user using getMenuChoice function
	menuChoice = getMenuChoice();
	if (menuChoice == 2) {
	//get heights from user and save to txt file
	saveHeights();
	}
	else if (menuChoice == 1) {
	FILE* fp;
	fp = fopen("heights.txt", "r");
	if (fp == NULL) {
	  printf("Cannot open file\n");
        }
	else {
	//read the values in txt file and save them
	  fscanf(fp, "%c %d\'%d\"\n",&initial, &feet, &inches);
	  fscanf(fp, "%c %d\'%d\"",&initial2, &feet2, &inches2);
	//calculate the difference between heights
	calcHeightDifference(feet,inches,feet2,inches2,&feetResult,&inchesResult);
	if (feet > feet2) {
	  initialTaller = initial;
	}
	else if (feet == feet2 && inches > inches2) {
	  initialTaller = initial;
	}
	else {
	  initialTaller = initial2;
	}
	printf("%c is taller by %d\'%d\".\n",initialTaller,feetResult,inchesResult);
	}
	}
return 0;
}

int getMenuChoice() {
  int menuChoice;
  //display to screen the options to the user
  printf("1. Who's tallest?\n");
  printf("2. Save new heights\n");
  //get users choice
  printf("Enter your choice: ");
  scanf("%d",&menuChoice);
  //return input to calling function
  return menuChoice;
}

void saveHeights(FILE* fp) {
  int feet, inches,feet2,inches2;
  char initial,initial2;
  //open file stream to write
  fp = fopen("heights.txt", "w");
  if (fp == NULL) {
	printf("Cannot open file\n");
  }
  else {
  //prompt user to enter date
  printf("Please enter initial and height 1 ($ ##'##\"): ");
  scanf(" %c %d\'%d\"",&initial,&feet,&inches);
  printf("Please enter initial and height 2 ($ ##'##\"): ");
  scanf(" %c %d\'%d\"",&initial2,&feet2,&inches2);
  //store feet in variable and inches in variable
  fprintf(fp,"%c %d\'%d\"\n",initial,feet,inches);
  fprintf(fp,"%c %d\'%d\"",initial2,feet2,inches2);
  }
}

void calcHeightDifference(int feet, int inches, int feet2, int inches2, int* feetResultPtr, int* inchesResultPtr) {
  if (feet > feet2) {
    *feetResultPtr = feet - feet2 - 1;
    *inchesResultPtr = inches - inches2 + 12;
  }
  else if (feet2 > feet) {
    *feetResultPtr = feet2 - feet - 1;
    *inchesResultPtr = inches2 - inches + 12;
  }
  else if (feet == feet2 && inches > inches2) {
    *feetResultPtr = feet - feet2;
    *inchesResultPtr = inches - inches2;
  }
  else if (feet == feet2 && inches2 > inches) {
    *feetResultPtr = feet2 - feet;
    *inchesResultPtr = inches2 - inches;
  }  
}



