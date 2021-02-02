//=========================================================================================
//
// Name: mainA.
// Comments: Main function for the task A
// Author: Tjark Ziehm [MTR: 936030]
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

    int x, y, z;  

    y = 1;

    if (y != 0)
        x = 5;

    if (y == 0)
        x = 3;
    else
        z = 7;     //  x = ?, y = 1, z=7 

    x = 1;         //  x = 1, y = 1, z=7 

    if (y > 0)     // true 
        if (x < 0) //false
            z = 3; 
        else
            y = 4;    //  x = 1, y = 4, z=7 

    if (z = y > 0)    // z = 1 da boolsche y > 0 -> true
        x = 3;        // x = 3  
    else if (y == 0)
        x = 5;
    else
        x = 7;          // x = 7, y = 4, z=7 

    if (z = (y == 4))   // x = 7, y = 4, z=1
        x = 2;          // x = 2, y = 4, z=7

    printf("x = %d, y = %d, z = %d\n", x, y, z);

    if (x = z = y);   // y= 4 z=4 x=4

    x = 3;              // y= 4 z=4 x=3

    printf("x = %d, y = %d, z = %d\n", x, y, z);
}