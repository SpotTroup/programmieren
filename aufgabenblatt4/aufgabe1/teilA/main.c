//=========================================================================================
//
// Name: mainA.
// Comments: Main function for the task A
// Author: Tjark Ziehm [MTR:936030]
// Version: 0.01
// Date: January. 2020
//=========================================================================================
// Structure
//=========================================================================================

/**
* Index
*/

//=========================================================================================

#include <stdio.h> // EOF in stdio.h als -1 definiert
#include <stdbool.h>
#include <stdlib.h>

#include "bib.h"

int main(void)
{
    // TODO:  
    int i = 8, j = 5;
    float x = 0.005, y = -0.01;
    char c = 'c', f = 'f';

    //Modulo operation mit Asci Werten
    //  (3*i - 2*j ) % ( f - c ) // Result Modulo: 14 % 3 = 2
    printf("ASCI 4 f: %d\n", f);   // 102 ->Asci
    printf("ASCI 4 c: %d\n\n", c); // 99 -> ASCI

    //Modulo operation
    //2 * ((i / 5) + (4 * (j - 3)) % (i + j - 2)); // Result: 18
    int result = 2 * ((i / 5) + (4 * (j - 3)) % (i + j - 2));
    printf("Modulo %d\n\n", result);

    //  ++i // Result: 9
    int value = ++i;
    printf("Value: %d\n\n", value);

    //  i++ // Result: 9
    int value2 = i++;
    printf("Value2: %d\n\n", value2);

    //   --j // Result:4
    int value3 = --j;
    printf("Value3: %d\n\n", value3);

    //  ++x // Result:1.005 000
    float value4 = ++x;
    printf("Value4: %lf\n\n", value4);

    //  y-- // Result: -1.01 000
    float value5 = y--;
    printf("Value5: %lf\n\n", value5);

    //   i <= j // Result: 0 = false
    bool value6 = ( i <= j );
    printf("Value6: %d\n", value6);
    printf("%s\n\n", value6 ? "true" : "false");

    //   c > f // Result: 0 = false
    bool value7 = ( c > f );
    printf("Value7: %d\n", value7);
    printf("%s\n\n", value7 ? "true" : "false");

    //   x >= 0 // Result: 1 = true
    bool value8 = ( x >= 0 );
    printf("Value ( x >= 0 ): %d\n", value8);
    printf("%s\n\n", value8 ? "true" : "false");

    //   x < y // Result: 1 = true
    bool value9 = ( x < y );
    printf("Value ( x < y ): %d\n", value9);
    printf("%s\n\n", value9 ? "true" : "false");

    //   j != 5 // Result: 0 = false
    bool value10 = ( j != 5 );
    printf("Value ( j != 5  ): %d\n", value10);
    printf("%s\n\n", value9 ? "true" : "false");

    //   c == 99 // Result: 1 = false
    bool value11 = ( c == 99 );
    printf("Value ( c == 99 ): %d\n", value11);
    printf("%s\n\n", value9 ? "true" : "false");

    //   5 * (i+j) > 'c' // Result: 1 = true ????????????????????
    bool value12 = ( (5 * (i+j)) > 'c' );
    printf("Value (5 * (i+j) > 'c') : %d\n", value12);
    printf("%s\n\n", value12 ? "true" : "false");

    //  ( 2*x + y ) == 1 // Result: false ????????????????????
    bool value13 = ( ((2*x) + y) == 1 );
    printf("Value (( 2*x + y ) == 1) : %d\n", value13);
    printf("%s\n\n", value13 ? "true" : "false");

    return 0;
}