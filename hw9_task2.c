/*
 * =====================================================================================
 *
 *       Filename:  hw9_task2.c
 *       	Usage:  ./hw9_task2.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/04/2017 04:30:03 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Andrew Little (), andrewlittle@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include "zone1.txt"

/* Function Prototypes */

FILE *FileRead(char *zone1.txt);
float range(float numbers[], int amount);
/* Main Program */
int main(int argc, char *argv[])
{
/*  I dont understand how to get the values from zone1.txt
 *  or how to do most of this from scratch */	
	count = 0;
	int sumx, sumy, sumxy, sumx2 = 0;
	float numbers;
	numbers = *zone1.txt;
	fopen zone1.txt
		if
	

	printf("Range of altitudes in km:\n");
	
	printf("Linear model:\n
			ozone-mix-ratio = %d altitude = %d" /*zone 1 stuff */);
			
	return 0;
}


/* Function Defenitions */
FILE *FileRead(char *zone1.txt)
{
	 FILE *inFile;

inFile = fopen("zone1.txt","r"):

if (inFile == NULL)
{
	exit(1);
}
	return;
}
int findMax(int *vals, FILE *zone1.txt)
{
	int i, max = vals[0];

	for (i = 1; i < *zone1.txt; i++
}
float range(float numbers[], int amount)
{
	int i;
	float min, max;
	min = numbers[0];
	max = numbers[0];
	for (i=1; i < amount; i++)
	{
		if (numbers[i] < min) min = numbers[i];
		if (numbers[i] > max) max = numbers[i];
	}

	}
}
