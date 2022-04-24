//Author: Kyle Nicely
//Date: 10/7/2021
//more_heights

#include <stdio.h>

int getMenuChoice();
void displayHeights();
void saveHeights();
void calcAverageHeight();

int main() {
	
	//declare variables
	int menuChoice,feetResult,inchesResult,feet,inches;
	char initial;
	FILE *fp; 
	//start loop	
	do {
		printf("***HEIGHT SYSTEM***\n");
		menuChoice = getMenuChoice(); 
		
	switch (menuChoice) {
		case 0:
		break;
		case 1: //open file stream to read
			  fp = fopen("heights.txt", "r");
			  if (fp == NULL) {
			  printf("Cannot open file\n");
  			  }
  			  else {
				displayHeights(fp);
				fclose(fp);
  			  };
		break;
		case 2: //open file stream to read
			  fp = fopen("heights.txt", "r");
			  if (fp == NULL) {
			  printf("Cannot open file\n");
  			  }
  			  else {
				int avgFeet = 0;
				int avgInches = 0;
				calcAverageHeight(fp, &avgFeet, &avgInches);
				printf("Average Height: %d\'%d\"\n",avgFeet,avgInches);
				fclose(fp);
			  };
		break;
		case 3: //open file stream to append
  			fp = fopen("heights.txt", "a");
  			if (fp == NULL) {
			   printf("Cannot open file\n");
  			}
  			else {
			   saveHeights(fp);
			   fclose(fp);
			};
		break;
		default: printf("Please enter a valid option!\n");
	  }
	} while (menuChoice != 0);
	
	
return 0;
}

int getMenuChoice() {
  int menuChoice;
  //display to screen the options to the user
  printf("1. Display Heights\n");
  printf("2. Calculate Average Height\n");
  printf("3. Save New Heights\n");
  printf("0. EXIT\n");
  //get users choice
  printf("Enter your choice: ");
  scanf(" %d",&menuChoice);
  //return input to calling function
  return menuChoice;
}

void displayHeights(FILE *fp) {
	int feet, inches, num;
	char initial;
	num = 1;
	printf("\n  Initial: Height\n");
        while(fscanf(fp, " %c %d\'%d\"",&initial, &feet, &inches) == 3) {
		printf("%d.      %c:  %d\'%d\"\n",num, initial, feet, inches);
		num ++;
	}	
}

void calcAverageHeight(FILE *fp, int *avgFeetPtr, int *avgInchesPtr) {
	int feet, inches, i, totalInches;
	char initial; 
	i = 0;
        while(fscanf(fp, "%c %d\'%d\"\n",&initial, &feet, &inches) == 3) {
		*avgFeetPtr += feet;
		*avgInchesPtr += inches;
		i++;
	}
	totalInches = ((*avgFeetPtr * 12) + (*avgInchesPtr)) / i;
	*avgFeetPtr = totalInches / 12;
	*avgInchesPtr = totalInches % 12;
}

void saveHeights(FILE* fp) {
	int feet, inches,numOfInputs, i,var;
	char initial;
	var = 1;
	//get number of heights user will enter
	printf("How many heights are you adding? ");
	scanf(" %d", &numOfInputs);
	
	//loop fprintf for number of inputs
	for (i = numOfInputs; i > 0; i--) { 
		printf("Please enter initial and height %d ($ ##'##\"): ",var);
		scanf(" %c %d\'%d\"",&initial, &feet, &inches);
		fprintf(fp,"%c %d\'%d\"\n",initial,feet,inches);
		var++;
	}
}
