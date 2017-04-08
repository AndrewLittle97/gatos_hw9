/*
 * =====================================================================================
 *
 *       Filename:  hw9_task1.c
 *       	Usage:  ./hw9_task1.c
 *    Description:  sd
 *
 *        Version:  1.0
 *        Created:  04/04/2017 04:27:15 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Andrew Little (), andrewlittle@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>

/* Function Prototypes */
void Usage(char *argv[]);
void ReadFile(char *fName, float num[]);
FILE *OpenCheckFile(char *fName);
void WriteFile(FILE *sFile, float num[]);
/* Main Program */
int main(int argc, char *argv[])
{
	if((argc != 3 || strcmp(argv[1], "--help") == 0))
	{
		Usage(argv);
	}
	else
	{
		float numbers[100];
		ReadFile(argv[1], numbers);
		FILE* file = OpenCheckFile(argv[2]);
		if(file != NULL)
		{
			WriteFile(file, numbers);
		}
		
	}

	return 0;
}


/* Function Defenitions */
void Usage(char *argv[])
{
	printf("Usage ./hw9_task1 <dataFile> <outFileName>\n");
	return;
}

void ReadFile(char *fName, float num[])
{
	FILE* file;
	int idx = 0; 
	file = fopen(fName, "r");
	while(! feof(file))
	{
		fscanf(file, "%f\n", &num[idx]);
		idx++;
	}
}

void WriteFile(FILE *sFile, float num[])
{
	for( int i = 0; i < 12; i++)
	{
		fprintf(sFile, "%1.4f\n", num[i]);
	}
}

FILE *OpenCheckFile(char *fName)
{
	FILE *fp= fopen(fName, "r");
	if(fp != NULL)
	{
		fclose (fp);
		printf("The txt file pointsIn.txt was successfully read.\n");
		printf("A file by the name pointsOut.txt exists.\n");
		printf("Do you want to continue and  overwrite it?\n");
		printf("For yes type Y, for no type N.\n");
		char choice;
		scanf("%c", &choice);
		if(choice == 'Y')
		{
			printf("The file pointsOut.txt has successfully been written as a txt file.\n");
			return fopen(fName, "w");
		}
	}
	return NULL;
}
