//Author: Kyle Nicely
//Date: 9/9/21
//inventory

#include <stdio.h>

int main(){

  int quantity1, quantity2, quantity3, quantity4;
  double price1, price2, price3, price4, sumTotal;
  char code1, code2, code3, code4;


  printf("***INVENTORY SYSTEM***\n");
  printf("Enter your items\n");

  printf("Item 1 (qauntity price code): ");
  scanf("%d %lf %c", &quantity1, &price1, &code1);

  printf("Item 2 (qauntity price code): ");
  scanf("%d %lf %c", &quantity2, &price2, &code2);
  
  printf("Item 3 (qauntity price code): ");
  scanf("%d %lf %c", &quantity3, &price3, &code3);

  printf("Item 4 (qauntity price code): ");
  scanf("%d %lf %c", &quantity4, &price4, &code4);

 
  sumTotal=price1*quantity1+price2*quantity2+price3*quantity3+price4*quantity4;
  printf("\n");
  printf("  YOUR ITEMS:\n");
  printf("======================================\n");
  printf("||Code   |   Quantity   |   Price   ||\n");
  printf("||=======|==============|===========||\n");
  printf("||   %c   |      %d       |    %.2lf   ||\n",code1,quantity1,price1);
  printf("||-------|--------------|-----------||\n");
  printf("||   %c   |      %d       |    %.2lf   ||\n",code2,quantity2,price2);
  printf("||-------|--------------|-----------||\n");	   
  printf("||   %c   |      %d       |    %.2lf   ||\n",code3,quantity3,price3);
  printf("||-------|--------------|-----------||\n");
  printf("||   %c   |      %d       |    %.2lf   ||\n",code4,quantity4,price4);
  printf("||-------|--------------|-----------||\n");
  printf("|| TOTAL                ||   %.2lf  ||\n",sumTotal);
  printf("======================================\n");

  
  return 0;
}  
