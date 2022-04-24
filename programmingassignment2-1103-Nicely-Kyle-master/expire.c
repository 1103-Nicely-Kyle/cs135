//Author: Kyle Nicely
//Date:9/16/21
//expire

#include <stdio.h>

int main(){
  int expMonth,expDay,expYear;						//declare variables
  int month,day,year;
  int daysInMonth, daysInExpMonth, dayOfYear, expDayOfYear;
  
  printf("Enter expiration date (mm/dd/yyyy): ");			//user inputs dates
  scanf("%d/%d/%d",&expMonth,&expDay,&expYear);

  printf("Enter todays date (mm/dd/yyyy): ");
  scanf("%d/%d/%d",&month,&day,&year);

 
  switch (month) {							//calculate the day of the year for todays date
	case 1: dayOfYear = day;
	break;
	case 2: dayOfYear = day + 31;
	break;
	case 3: dayOfYear = day+28+31;
	break;
	case 4: dayOfYear = day+31+28+31;
	break;
	case 5: dayOfYear = day+30+31+28+31;
	break;
	case 6: dayOfYear = day+31+30+31+28+31;
	break;
	case 7: dayOfYear = day+30+31+30+31+28+31;
	break;
	case 8: dayOfYear = day+31+30+31+30+31+28+31;
	break;
	case 9: dayOfYear = day+30+31+30+31+30+31+28+31;
	break;
	case 10: dayOfYear = day+31+30+31+30+31+30+31+28+31;
	break;
	case 11: dayOfYear = day+30+31+30+31+30+31+30+31+28+31;
	break;
	case 12: dayOfYear = day+31+30+31+30+31+30+31+30+31+28+31;
	break;
}

  switch (expMonth) {							//calculate the day of the year for expiration date
	case 1: expDayOfYear = expDay;
	break;
	case 2: expDayOfYear = expDay + 31;
	break;
	case 3: expDayOfYear = expDay+28+31;
	break;
	case 4: expDayOfYear = expDay+31+28+31;
	break;
	case 5: expDayOfYear = expDay+30+31+28+31;
	break;
	case 6: expDayOfYear = expDay+31+30+31+28+31;
	break;
	case 7: expDayOfYear = expDay+30+31+30+31+28+31;
	break;
	case 8: expDayOfYear = expDay+31+30+31+30+31+28+31;
	break;
	case 9: expDayOfYear = expDay+30+31+30+31+30+31+28+31;
	break;
	case 10: expDayOfYear = expDay+31+30+31+30+31+30+31+28+31;
	break;
	case 11: expDayOfYear = expDay+30+31+30+31+30+31+30+31+28+31;
	break;
	case 12: expDayOfYear = expDay+31+30+31+30+31+30+31+30+31+28+31;
	break;
}




  long long int daysInExpDate = (expYear * 365) + expDayOfYear;					//convert dates to days
  long long int daysInCurrentDate = (year * 365) + dayOfYear;
  long long int daysToExp = daysInExpDate - daysInCurrentDate;					//calculate difference in days
	
  if (expMonth > month && expYear == year) {
    printf("Your food expires in %lld days.\n",daysToExp);
  }
  else if (expMonth == month && expDay > day && expYear == year) {
    printf("Your food expires in %lld days.\n",daysToExp);
  }
  else if (expYear > year) {
    printf("Your food expires in %lld days.\n",daysToExp);
  }
  else if (expMonth == month && expDay == day && expYear == year) {
    printf("Your food is expired!\n");
  }
  else {
    printf("Your food is expired!\n");
  }

  return 0;
}

  
	  
