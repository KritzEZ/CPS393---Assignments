//Kritarth Shah
//500907217
/*
Name: sizecaller()
Purpose: Takes size input given by the user and checks whether it EOF (NULL) a correct int or some bad input
Parameters: Takes NO parameters
Return Values: Returns 0 if size is EOF/NULL, returns -1(any num outside range) if input is not an int typr or retuns size if correct input is provided.
Input: User input for size of vector array (number of vectors to expect)
Output: No output only return values
*/
int sizecaller();

/*
Name: getNormalizer()
Purpose: Runs through the vector input (squares it and adds to accumulator) and gets the normalize value of the vector array
Parameters: Takes in an array which holds all the vectors and the size of the array which will set limits to the for-loop
Return Values: Returns the square root of the sum of all vectors squared (the normalizer).
Input: No inputs in function
Output: No outputs in function
*/
double getNormalize(double array[], int size);

/*
Name: printvector()
Purpose: Takes the array of vectors and prints it one by one in the format required in the assignment.
Parameters: Takes in an array which holds all the vectors and the size of the array which will set limits to the for-loop
Return Values: No return value
Input: No inputs in function
Output: Prints the vectors in float format with 3 decimal places in the format the assignment requires "[ a, b, c, d ]"
*/
void printvector(double array[], int size);

/*
Name: printnormalized()
Purpose: Takes the array of vectors and the normalize value and prints the vector/normalizer value in the same position as the vector array
Parameters: Takes in an array which holds all the vectors and the size of the array which will set limits to the for-loop and the normalizer value
Return Values: No return value
Input: No inputs in function
Output: Prints the normalized vectors in float format with 3 decimal places in the format the assignment requires "[ a/N, b/N, c/N, d/N ]"
*/
void printnormalized(double array[], int size, double normalizer);