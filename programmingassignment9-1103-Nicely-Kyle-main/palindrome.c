//Kyle Nicely
//11-19-21
//palindrome

#include <stdio.h>
#define LENGTH 100
#define TRUE 1
#define FALSE 0

_Bool isPalindrome(char array[]);
_Bool isSameString(char array2[], char array3[]);
void reverseCopy(char sourceStr[], char destinStr[]);
int stringLength(char array6[]);


int main() {
  char string1[LENGTH + 1], string2[LENGTH + 1], reverseStr[LENGTH];
  _Bool sameWord, palindrome;
 
  printf("Enter your first word: ");
  scanf("%s", string1);
  printf("Enter your second word: ");
  scanf("%s", string2);

  sameWord = isSameString(string1, string2);
  if(sameWord) {
    printf("You entered the same words!\n");
    if(isPalindrome(string1))
      printf("'%s' is a palindrome!\n",string1);
    else
      printf("'%s' is not palindrome.\n",string1);
  }
  else {
    if(isPalindrome(string1))
      printf("'%s' is a palindrome!\n",string1);
    else
      printf("'%s' is not palindrome.\n",string1);

    if(isPalindrome(string2))
      printf("'%s' is a palindrome!\n",string2);
    else
      printf("'%s' is not palindrome.\n",string2);
  }
  return 0;
}

_Bool isPalindrome(char array[])
{
  char reverseArray[LENGTH + 1];
  reverseCopy(array, reverseArray);
  return isSameString(array, reverseArray);
}

_Bool isSameString(char array2[], char array3[])
{
 for (int i = 0; array3[i] != '\0' || array2[i] != '\0'; i++)
 {
   if (array3[i] != array2[i])
     return FALSE;
 }
 return TRUE;
}

void reverseCopy(char sourceStr[], char destinStr[])
{
  int length = stringLength(sourceStr);
  int i = length - 1;
  int n = 0;
  
  for (n; n <= length; n++)
  {
    destinStr[n] = sourceStr[i];
    i--;
  }
}

int stringLength(char array6[])
{
  int i = 0;
  for (i; array6[i] != '\0'; i++);
  return i;
}
