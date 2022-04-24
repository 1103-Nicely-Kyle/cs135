//Author: Kyle Nicely
//Date: 10/7/2021
//more_heights

#include <stdio.h>
#define Num_Digits 5
int getMenuChoice();
void displayHeights(FILE*);
int loadHeightData(FILE* fp, int i, char initial, double heightsArray[]);
double calcAverageHeight(int i, double heightsArray[]);

int main() {
	
  //declare variables
  int menuChoice, i, num, n;
  double heightsArray[Num_Digits], avgHeight;
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
				displayHeights(fp);
				printf("Which initial do you want to calculate for? ");
				scanf(" %c", &initial);
				num  = loadHeightData(fp, i, initial, &heightsArray[Num_Digits]);
				avgHeight = calcAverageHeight(num, &heightsArray[Num_Digits]);
				printf("%c's average height: %.2lf\n", initial, avgHeight);
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
  printf("0. EXIT\n");
  //get users choice
  printf("Enter your choice: ");
  scanf(" %d",&menuChoice);
  //return input to calling function
  return menuChoice;
}

void displayHeights(FILE *fp) {
	int i = 0;
	double heightsArray[Num_Digits];
	char initial;
	
	while(fscanf(fp, " %c", &initial) == 1) {
		printf("%c:   ",initial);		
		
		for(i = 0; i < Num_Digits; i++) {
		fscanf(fp, " %lf", &heightsArray[i]);
		printf("%.2lf ", heightsArray[i]);
		}
	printf("\n");
	}		
}

//not sure why but after I fscanf the array it is saving all 0's to it
int loadHeightData(FILE* fp, int i, char initial, double heightsArray[Num_Digits]) {

	char tempInitial;
	double tempHeight;
	int n;
	i = 0;
	
	while(fscanf(fp, " %c", &tempInitial) == 1) {
	  if(tempInitial == initial) {
	    while(fscanf(fp, " %lf", &tempHeight) == 1) {
	      tempHeight = heightsArray[i];
	      i++;
	    }
	  }
	}	    

return i;
}

//because my array is all 0's it returns 'inf' for avgHeight
double calcAverageHeight(int i, double heightsArray[]) {
	double avgHeight;
	
	for(i = 0; i < Num_Digits; i++) {
		avgHeight += heightsArray[i];
		avgHeight /= i;
	}
	return avgHeight;
}
