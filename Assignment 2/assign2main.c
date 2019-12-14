/*I certify that this assignment is entirely my own work.*/
//Kritarth Shah
//500907217
#include "assign2funcs.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXSIZE 9 /*maximum size of array(user input)*/
#define MINSIZE 0 /*minimum size of array(user input)*/
#define GOODEXIT 0 /*exitcode if everything runs good*/
#define ERROREXIT 1 /*exitcode is there is an error/bad input*/

/*
Name: main(void)
Purpose: To run the code till it is terminated by user and to call the functions to output the desired output
Parameters: Takes NO parameters
Return Value: Returns the final exitcode. When the program is terminated it returns either 0 if the program ran with all success or 1 if there was a bad input during the program.
Input: After size is established, the user is asked for the vector, and it takes the size amount of the users input. 
Output: No Output, outputs are done using other functions (look at header file for information)
*/
int main(void) {
	int exitcode = GOODEXIT; /*holds the exitcode until user terminates code (starts with code 0)*/
	double normalized; /*holds the normalizer number (The square root of all vectors squared and sumed)*/
	int size; /*hold the size of the vector array (inputed by user later on)*/
	double* array; /*array declared that will hold user inputs of vectors*/
	while (1) {
		int moveon = 0; /*acts as a boolean to tell if user input for vector was good input or bad*/
		size = sizecaller(); /*holds the size inputed by the user for number of vectors*/
		if (size == 0) {
			return exitcode;
		}

		else if (size < MINSIZE || size >= MAXSIZE) {
			fprintf( stderr, "BAD INPUT\n"); /*Bad Input --> Send To STDERR*/
			exitcode = ERROREXIT;
		}
		else {
			array = malloc(sizeof(double) * size); /*sets the size of array to the size inputed by user*/

			//Main for-loop
			int i; /*index for for-loop*/
			for (i = 0; i < size; i++) {
				float number; /*holds float value of users inputed vector*/
				if (scanf("%f", &number)) {
					array[i] = (double)number;
				}
				else {
					fprintf( stderr ,"BAD INPUT\n"); /*Bad Input --> Send To STDERR*/
					exitcode = ERROREXIT;
					moveon = 1;
					break;
				}
			}
			if (moveon == 0) {
				normalized = getNormalize(array, size);
				if (normalized == 0) { /*If normalizer is 0, it means all vectors are 0 causing divide by 0 --> error*/
					fprintf(stderr, "BAD INPUT\n"); /*Bad Input --> Send To STDERR*/
					exitcode = ERROREXIT;
				}
				else {
					printvector(array, size);
					printnormalized(array, size, normalized);
				}
			}
		}
		while (getchar() != '\n'); /*Clears the rest of the buffer in line if any*/
	}
	return exitcode;
}
