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

/* Function Prototypes */
void Usage(char *argv[]);
void ReadFile(char *fName, float num[]);
FILE *OpenCheckFile(char *fName);
void WriteFile(FILE *sFile, float num[]);
/* Main Program */
int main(int argc, char *argv[])
{
	if((argc != 3 || strcmp(argv[2], "--help") == 0))
	{
		Usage(argv);
	}
	else
	{

	}

	return 0;
}


/* Function Defenitions */
void Usage(char *argv[])
{
	printf("Usage ./hw9_task1 <dataFile> <outFileName>\n");
	return;
}

