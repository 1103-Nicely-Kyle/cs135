//Author: Kyle Nicely
//Date: 9/30/21
//date calc

#include <stdio.h>
#include <stdlib.h>

int getMenuChoice(int*);
void getDate(int*,int*);
void subtractDays(int,int,int,int*,int*);
void addDays(int,int,int,int*,int*);

int main() {
  printf("***DATE CALCULATOR***\n");
  //decare variables
  int menuChoice,month,day,newMonth,newDay,numberOfDays;

  //prompt user for menu option and get menu option from user
  getMenuChoice(&menuChoice);
  //get date and days from user
  getDate(&month,&day);
  //get days to be added or subtracted
  printf("Enter number of days between 1 and 30: ");
  //store number of days to be added or subtracted
  scanf("%d",&numberOfDays);
  //decide which operation to perform
  switch(menuChoice) {
  case 1: printf("Subtracting\n");
    subtractDays(month,day,numberOfDays,&newMonth,&newDay);
    break;
  case 2: printf("Adding\n");
    addDays(month,day,numberOfDays,&newMonth,&newDay);
    break;
  }
  //dislplay new date to screen
  printf("%d/%d\n",newMonth,newDay);
  return 0;
}

int getMenuChoice(int* menuChoicePtr) {
  //display to screen the options to the user
  printf("1 - Subtraction\n");
  printf("2 - Addition\n");
  //get users choice
  scanf("%d",menuChoicePtr);
  //return input to calling function
  return *menuChoicePtr;
}

void getDate(int* monthPtr, int* dayPtr) {
  //prompt user to enter date
  printf("Enter a date ##/##: ");
  //store month in variable pointer points to and day in variable other pointer points to
  scanf("%d/%d",monthPtr,dayPtr);
}

void subtractDays(int month,int day,int numberOfDays,int* monthPtr,int* dayPtr){ 
  //subtract number of days from date and store resulting date in variables last pair of pointer parameters point to

  if (numberOfDays > day && month > 1) {
    *dayPtr = 30 - abs(day - numberOfDays);
    *monthPtr = month - 1;
  }
  else if (numberOfDays == day) {
    *dayPtr = 1;
    *monthPtr = month;
  }
  else if (month == 1) {
    *dayPtr = 30 - abs(day - numberOfDays);
    *monthPtr = 12;
  }
  else {
    *dayPtr = day - numberOfDays;
    *monthPtr = month;
  }
}
void addDays(int month,int day,int numberOfDays,int* monthPtr,int* dayPtr) {
  //add number of days to date and store resulting date in variables last pair of pointer parameters point to

    if (numberOfDays+day>30 && month < 12) {
      *dayPtr = (day+numberOfDays) - 30;
      *monthPtr = month + 1;
    }
    else if (month == 12) {
    *dayPtr = (day+numberOfDays) - 30;
    *monthPtr = 1;
    }
    else {
    *dayPtr = day + numberOfDays;
    *monthPtr = month;
    }
}
  
