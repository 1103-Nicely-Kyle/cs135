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
	    num  = loadHeightData(fp, i, initial, &heightsArray[Num_Digits]);
	    fclose(fp);
	    printf("%lf", heightsArray[0]);
  	  };
	 return 0;
}
int loadHeightData(FILE* fp, int i, char initial, double heightsArray[]) {
	i = 0;	
	char temp;
	double tempHeight;
	
	while(fscanf(fp, " %c", &temp) == 1) {
				
		if(initial == temp) {
		  while(fscanf(fp, " %lf", &tempHeight) == 1) {
		      tempHeight = heightsArray[i];
		      i++;
		 	}
		}
	}
	printf("%d",i);	    
        
return i;
} 
