#include <stdio.h>

int main() {
  FILE *fp;
  char initial;
  double heightArray[5];
  int i = 0;
  int n;
  	fp = fopen("heights.txt", "r");
        if (fp == NULL) {
	  printf("Cannot open file\n");
        }
	else {
	  while(fscanf(fp, " %c", &initial) == 1) {
	    if(initial == 'J') {
	    while(fscanf(fp, " %lf", &heightArray[i]) == 1) {
	      i++;
	      }
	    }
	  }
	}  
	for(n = 0; n < 5; n++) {
	  printf(" %.2lf", heightArray[n]);
	}
	printf("\n");
	fclose (fp);
  return 0;
}
