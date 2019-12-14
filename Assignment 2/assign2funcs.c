//Kritarth Shah
//500907217
#include "assign2funcs.h"
#include <stdio.h>
#include <math.h>
#define MAXSIZE 9 /*maximum size of array(user input)*/
#define MINSIZE 0 /*minimum size of array(user input)*/

int sizecaller() {
	int size; /*hold the size inputted by user*/
	int correctformat = scanf("%d", &size); /*gets the exitcode of the scanf() method --> if 1, the input was good, if not 1, input type was wrong*/
	if (correctformat == 1 && size > MINSIZE && size <= MAXSIZE) {
		return size;
	}
	else if (correctformat == 0 || size < MINSIZE || size > MAXSIZE) {
		return -1;
	}
	else { //By default the input either has to be 0 or EOF
		return 0;
	}
}

double getNormalize(double array[], int size) {
	double N = array[0] * array[0]; /*holds the normalizer value(acts as an accumulator/updater) and is initialize to the square of the first vector*/
	//N = array[0] * array[0]; 
	int i; /*index for for-loop*/
	for (i = 1; i < size; i++) {
		N = N + (array[i] * array[i]);
	}
	return sqrt(N);
}

void printvector(double array[], int size) {
	int i; /*index for for-loop*/
	printf("VECTOR: [");
	//For-loop to go through all vectors in array
	for (i = 0; i < size; i++) {
		printf(" %.3f", array[i]); /*By default, prints to STDOUT*/
		if (i != size - 1) { //For the correct comma placements when printing the vector --> If last vector, ignore the comma
			printf(",");
		}
	}
	printf(" ] ");
}

void printnormalized(double array[], int size, double normalizer) {
	int i; /*index for for-loop*/
	printf("NORMALIZED: [");
	//For-loop to go through all vectors in array
	for (i = 0; i < size; i++) {
		printf(" %.3f", array[i] / normalizer); /*By default, prints to STDOUT*/
		if (i != size - 1) { //For the correct comma placements when printing the vector --> If last vector, ignore the comma
			printf(",");
		}
	}
	printf(" ]\n");
}