//Author: Kyle Nicely
//Date: 10/7/2021
//all_heights

#include <stdio.h>
#define SIZE 50
int getMenuChoice();
int loadHeightData(FILE* fp, int cols, char initialsArray[], double heightsArray[][cols]);
void displayHeightData(int rows, int cols, char initialsArray[], double heightsArray[][cols]);
double calcAverageHeight(int cols, double heightsArray[]);
void saveHeights();

int main() {
  //declare variables
  int menuChoice, rows, num, cols = 5;
  char initial, initialsArray[SIZE];
  double avg, heightsArray[SIZE][cols];
  FILE* fp;
  
  //start loop	
  do {
    fp = fopen("heights.txt", "r");
    if (fp == NULL) {
      printf("Cannot open file\n");
    }
    else {
      rows = loadHeightData(fp, cols, initialsArray, heightsArray);
      fclose(fp);
    }
    printf("***HEIGHT SYSTEM***\n");
    menuChoice = getMenuChoice(); 
    switch (menuChoice) {
    case 0:
      break;
    case 1: 
      displayHeightData(rows, cols, initialsArray, heightsArray);
      break;
    case 2:
      displayHeightData(rows, cols, initialsArray, heightsArray);
      printf("Which row do you want to calculate for? ");
      scanf(" %d", &num);
      avg = calcAverageHeight(cols, heightsArray[num - 1]);
      printf("%c's average height: %.2lf\n", initialsArray[num - 1], avg);
      break;
    case 3:
      fp = fopen("heights.txt", "a");
      if (fp == NULL) {
	printf("Cannot open file\n");
      }
      else {
	saveHeights(fp);
      }
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

int loadHeightData(FILE* fp, int cols, char initialsArray[], double heightsArray[][cols]) {
  int row = 0;
  int col = 0;
 
  while(fscanf(fp, " %c", &initialsArray[row]) == 1) {
    
  while(fscanf(fp, "%lf", &heightsArray[row][col]) == 1) {
    col++;
  }
  row++;
  col = 0;
  }
      
  return row;
}

void displayHeightData(int rows, int cols, char initialsArray[], double heightsArray[][cols]) {

  for(int i = 0; i < rows; i++) {
    printf("%d.   %c:   ", i + 1, initialsArray[i]);
    for(int n = 0; n < cols; n++) {
      printf("%.2lf  ", heightsArray[i][n]);
    }
    printf("\n");
  }
}

double calcAverageHeight(int cols, double heightsArray[]) {
  double avg = 0;

  for(int i = 0; i < cols; i++) {
    avg += heightsArray[i];
  }
  
  return avg / cols;
}

void saveHeights(FILE *fp){
  int num, i = 0;
  int row = 0;
  int col = 5;
  double heightsArray[col];
  char initialsArray[SIZE];
  printf("How many rows are you adding? ");
  scanf(" %d", &num);

  for(i = 0; i < num; i++) {
    printf("Please enter initial and 5 heights %d: ", i+1);
    scanf(" %c", &initialsArray[row]);
    scanf(" %lf %lf %lf %lf %lf", &heightsArray[0], &heightsArray[1], &heightsArray[2], &heightsArray[3], &heightsArray[4]);
    fprintf(fp, "%c %.2lf %.2lf %.2lf %.2lf %.2lf\n",  initialsArray[0], heightsArray[0], heightsArray[1], heightsArray[2], heightsArray[3], heightsArray[4]);
  } 
}



