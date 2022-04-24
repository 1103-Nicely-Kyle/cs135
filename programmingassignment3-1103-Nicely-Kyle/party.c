//Author: Kyle Nicely
//Date: 9/23/21
//party

#include <stdio.h>

double calcBalloonTotal(double);     
double calcStreamerTotal(double, char);
char color, color2;
double balloonQty, balloonQty2, balloonPrice;
double streamerQty, streamerQty2, streamerPrice;
double totalBalloonPrice, totalStreamerPrice;
double out1,out2,out3,out4,total1,total2;

int main() {
  printf("PARTY PLANNING!\n");


  printf("\nPARTY 1\nEnter the number of balloons: ");
  scanf("%lf",&balloonQty);
  
  printf("Enter the yards and color of streamers: ");
  scanf("%lf %c",&streamerQty,&color);
  
  out1 = calcBalloonTotal(balloonQty);
  out2 = calcStreamerTotal(streamerQty, color);

  printf("PARTY 2\nEnter the number of balloons: ");
  scanf("%lf",&balloonQty2);
  
  printf("Enter the yards and color of streamers: ");
  scanf("%lf %c",&streamerQty2,&color2);
  
  out3 = calcBalloonTotal(balloonQty2);  
  out4 = calcStreamerTotal(streamerQty2, color2);

  total1 = out1 + out2;
  total2 = out3 + out4;  

  if (total1 < total2) {
	printf("\nLooks like party 1 is cheaper!\n");
}
  else {
	printf("\nLooks like party 2 is cheaper!\n");
}  
  	printf("Party 1: %.2lf\n",total1);
	printf("Party 2: %.2lf\n",total2);
  return 0;
}

double calcBalloonTotal(double balloonQty) {
	if(balloonQty >= 1 && balloonQty <= 50) {
		balloonPrice = .25;
	}
	else if(balloonQty >= 51 && balloonQty <= 100) {
		balloonPrice = .15;
	}
	else {
	balloonPrice = .10;
	}

	totalBalloonPrice = balloonQty*balloonPrice;
	return totalBalloonPrice;
}

double calcStreamerTotal(double streamerQty, char color) {
  switch(color) {
    case 'R': case 'O': case 'Y': case 'G': case 'B': case 'P': streamerPrice = .85;
     break;
    case 'S': case 'A': streamerPrice = 1.25;
     break;
 }

  switch(color2) {
    case 'R': case 'O': case 'Y': case 'G': case 'B': case 'P': streamerPrice = .85;
     break;
    case 'S': case 'A': streamerPrice = 1.25;
     break;
 }
  return streamerQty*streamerPrice;
}
