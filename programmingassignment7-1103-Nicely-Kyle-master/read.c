//Author: Kyle Nicely
//Date: 10/7/2021
//more_heights

#include <stdio.h>
#define Num_Digits 5

int loadHeightData(FILE* fp, int i, char initial, double heightsArray[]);


int main() {
	
	//declare variables
        int menuChoice, i, num;
	double heightsArray[Num_Digits], avgHeight;
	char initial;
	FILE *fp;
	
	
        //open file stream to read
	fp = fopen("heights.txt", "r");
        if (fp == NULL) {
	  printf("Cannot open file\n");
        }
	else {
	 
	  printf("Which initial do you want to calculate for? ");
	  scanf(" %c", &initial);
	  num  = loadHeightData(fp, i, initial, &heightsArray[Num_Digits]);
	  
	  printf("%.2lf\n", heightsArray[1]);
	};
	printf("%d\n",num);     
	
return 0;
}

int loadHeightData(FILE* fp, int i, char initial, double heightsArray[]) {
	i = 0;	
	char tempInitial;
	double tempHeight;
	
	while(fscanf(fp, " %c", &tempInitial) == 1) {
				
		if(initial == tempInitial) {
		  while(fscanf(fp, " %lf", &tempHeight) == 1) {
		      tempHeight = heightsArray[i];
		      i++;
		 	}
		}
	}
	printf("%d",i);	    
        
return i;
}
