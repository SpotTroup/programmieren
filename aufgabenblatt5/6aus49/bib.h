//=========================================================================================
//
// Name: bib.h
// Comments:  bib header for bib.c
// Author: Tjark Ziehm (MTR: 93060)
// Version: 0.01
// Date: January. 2020
//=========================================================================================
// Structure 
//=========================================================================================

/*
* Index
*/

//========================================================================================= 
// Return Type: int
// Name: getNumberFromUser
// Parameters: None
// Declaration
int getSingleNumberFromUser();

// Return Type: int
// Name: max Value of two integers
// Parameters: int number_a, int number_b
// Declaration
int max(int number_a, int number_b);

// Return Type: int
// Name: min value of two integers
// Parameters: int number_a, int number_b
// Declaration
int min(int number_a, int number_b);

// Return Type: unsigned int
// Name: minArray smallest value in an array
// Parameters:int array[], unsigned int length
// Declaration
int minArray(int array[], unsigned int length);

// Return Type: unsigned int
// Name: maxArray biggest value in an array
// Parameters: int array[], unsigned int length
// Declaration
int maxArray(int array[], unsigned int length);

// Return Type: array
// Name: muserInputNumbers
// Parameters:  int userChoise[], unsigned int LENGTH
// Declaration
int userInputNumbersToArray( int userChoise[], unsigned int LENGTH);

// Return Type: array
// Name: getRandomNumberRange random number generator between two parameters
// Parameters: int lowest, int highest, int count
// Declaration
int getRandomNumberRange(int lowest, int highest, int count);


// Return Type: array
// Name: getRandomNumberRange random number generator between two parameters
// Parameters: int lowest, int highest, int count
// Declaration
int randomNumbersToArray(int lowest, int highest, int count, int draws,int *randomSelection);

// Return Type: array
// Name: lottery comparison- compares the user input with the lottery choise
// Parameters: array from user && array from lottery
// Declaration
int lotterycomparison();

// Return Type: int
// Name: faculty - calculates the result recursive
// Parameters: int n
// Declaration
int faculty(int  n );