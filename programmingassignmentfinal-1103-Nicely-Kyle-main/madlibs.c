//Kyle Nicely
//12.7.21
//madlibs

#include <stdio.h>
#define COLUMNS 100
#define ROWS 100

void getFileContents(FILE *, int *, int *, char [], char [][COLUMNS + 1]);
int stringLength(char []);
void stringCopy(char [], char[]);
void display(int *numRows, char [][COLUMNS + 1], char userInput[][COLUMNS + 1]);
void getUserInput(int numLetters, char letters[], char userInput[][COLUMNS + 1]);

int main(int argc, char *argv[])
{
	FILE *fp;
	int numLetters, numRows;
	char letters[ROWS + 1], madlibText[ROWS][COLUMNS + 1], userInput[ROWS][COLUMNS + 1];
	int num = 0;
    
	if(argv[1] == NULL) 
	{
   		printf("Please enter a madlibs filename\n");
   	}
    if(argv[1] != NULL) 
	{
   		fp = fopen(argv[1], "r");
		getFileContents(fp, &numLetters, &numRows, letters, madlibText);
		getUserInput(numLetters, letters, userInput);
		display(&numRows, madlibText, userInput);
		fclose(fp);
    }
    
  return 0;
}

void getFileContents(FILE *fp, int *numLetters, int *numRows, char letters[], char madlibText[][COLUMNS + 1])
{
	char tempWord[ROWS + 1];
	int rowIndex = 0, length;
	*numLetters = 0;

	while( fgets(tempWord, ROWS + 1, fp) != NULL )
    {
		length = stringLength(tempWord);
		tempWord[length - 2] = '\0';
		
		if (stringLength(tempWord) == 1)
		{
			letters[*numLetters] = tempWord[0];
			(*numLetters)++;
		}
		else
		{
			stringCopy(tempWord, madlibText[rowIndex]);
			rowIndex += 2;
		}  
    }
	*numRows = rowIndex;
}

int stringLength(char lengthArray[])
{
	int i = 0;
	for (i; lengthArray[i] != '\0'; i++);
	return i;
}

void stringCopy(char sourceStr[], char destinStr[])
{
	int i = 0;
	for (i; sourceStr[i] != '\0'; i++)
	{
		destinStr[i] = sourceStr[i];
	}
	destinStr[i] = '\0';
}

void display(int *numRows, char finalMadlib[][COLUMNS + 1], char userInput[][COLUMNS + 1])
{
	int n = 0;
	for(int i = 0; i < *numRows; i++)
	{
		if(*finalMadlib[i] != '\0')
		{
			printf("%s", finalMadlib[i]);
		}	
		else
		{	
			printf(" %s", userInput[n]);
			n++;
		}
	}
	printf("\n");
}

void getUserInput(int numLetters, char letters[], char userInput[][COLUMNS + 1])
{
    
	for (int letter = 0; letter < numLetters; letter++)
    {    
    	switch(letters[letter])
    	{
    		case 'A':
			printf("Please enter an adjective: ");
			fgets(userInput[letter], COLUMNS + 1, stdin);
			userInput[letter][stringLength(userInput[letter])] = '\0';
			userInput[letter][stringLength(userInput[letter]) - 1] = ' ';
			break;
		    case 'V':
		    printf("Please enter a verb: ");
			fgets(userInput[letter], COLUMNS + 1, stdin);
			userInput[letter][stringLength(userInput[letter])] = '\0';
			userInput[letter][stringLength(userInput[letter]) - 1] = ' ';
			break;
			case 'N':
			printf("Please enter a noun: ");
			fgets(userInput[letter], COLUMNS + 1, stdin);
			userInput[letter][stringLength(userInput[letter])] = '\0';
			userInput[letter][stringLength(userInput[letter]) - 1] = ' ';
			break;
		}
	}
}
