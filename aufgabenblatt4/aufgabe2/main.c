//=========================================================================================
//
// Name: mainA.
// Comments: Main function for the task to use Array element without Pointer to change the ouput
// Author: Tjark Ziehm [MTR: 936030]
// Version: 0.01
// Date: January. 2020
//=========================================================================================
// Structure
//=========================================================================================
/*
 Index
*/
//=========================================================================================

#include <stdio.h> // EOF in stdio.h als -1 definiert
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "bib.h"

#define typename(x) _Generic((x),                                      \
                             _Bool                                     \
                             : "_Bool", unsigned char                  \
                             : "unsigned char",                        \
                               char                                    \
                             : "char", signed char                     \
                             : "signed char",                          \
                               short int                               \
                             : "short int", unsigned short int         \
                             : "unsigned short int",                   \
                               int                                     \
                             : "int", unsigned int                     \
                             : "unsigned int",                         \
                               long int                                \
                             : "long int", unsigned long int           \
                             : "unsigned long int",                    \
                               long long int                           \
                             : "long long int", unsigned long long int \
                             : "unsigned long long int",               \
                               float                                   \
                             : "float", double                         \
                             : "double",                               \
                               long double                             \
                             : "long double", char *                   \
                             : "pointer to char",                      \
                               void *                                  \
                             : "pointer to void", int *                \
                             : "pointer to int",                       \
                               default                                 \
                             : "other")

// TODO: Delete Controlls

int main()
{
  int userInput;
  int decission;
  int numBits = 0;

  // equivalent to typeof() for debugging
  enum t_typename
  {
    TYPENAME_BOOL,
    TYPENAME_UNSIGNED_CHAR,
    TYPENAME_CHAR,
    TYPENAME_SIGNED_CHAR,
    TYPENAME_SHORT_INT,
    TYPENAME_UNSIGNED_SHORT_INT,
    TYPENAME_INT,
    TYPENAME_POINTER_TO_INT,
    TYPENAME_OTHER
  };

  // TODO: CASE für eingabe definieren
  printf("Dezimalzahl zu binär Converter.");
  printf("Wählen Sie eine der folgenden Zahl ein,\n 1 = Umwandeln von 1\n 2 = Umwandeln von 23\n 3 = Umwandeln von 1234567\n -> ");
  scanf("%d", &userInput);

  // FIXME: Change unsigned int to long int ( for case 1 and 3) overflow @3
  decission = inputCaseControll(userInput);
  printf("[Controll](Main)Ausgabe nach Case: %ld", decission);

  //-> define size of a 4byte integer in bits
  numBits = (sizeof(unsigned int) * 8);
  printf("[Controll](Main) numBits: %d\n", numBits);

  //Convert integer to binary
  //int * test = decToBin(decission);

  int n = decission;
  char *c_binary;

  // printf("Enter an integer in decimal number system\n");
  // printf("Eingabe:");
  //scanf("%d", &n);
  printf("Value n %s\n", typename(n));

  c_binary = decimal_to_binary(n);
  printf("Binary string of %d is: %s\n", n, c_binary);
  //printf("Binary %s\n",c_binary);
  //free(c_binary);

  //printf("%s\n", typename(*c_binary));

  long long int x = atoi(c_binary);
  printf("Value n %s\n", typename(x));
  printf("Converting %d: %lld\n", n, x);

  // Sort the binary bundle from right to right to left with rest od modulo and the 4-numbers groub splitted by free space

  int counter = 0;

  for (int i = 32; i > 0; i--)
  {
    counter = counter + 1;
    printf("i = %d und counter = %d -->", i, counter);
    long long int potency = i;
    long long int fix = 1;
    long actualpotencyInteger = fix << potency;
    int intToBinaryValue = decimal_to_binaryLong(actualpotencyInteger);
    
    printf("%d\n", intToBinaryValue);

    //int result = atoi(intToBinaryValue);

    //printf("Left Shifted by counter: %lld @ %lld \n", counter, actualpotencyInteger);
    //printf("Left Shifted by counter: %lld \n", result);
  }

  //printf("%s\n", typename(x));

  //printf("[Controll](Main)input value %d with output %ls\n", decission, test);

  //read out value numbers in the array
  //int test1[3] = {1, 2, 3};
  // int values = (&test)[1] - test;
  // printf("[Controll](Main) %d  Number(s) of Value(s) is the array.\n", values);

  //readOut Array from right to left
  //readOutArrayRL();

  return 0;
}
