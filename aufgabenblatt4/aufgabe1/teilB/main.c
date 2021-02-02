//=========================================================================================
/*
    _          __             _            _ 
   / \  _   _ / _| __ _  __ _| |__   ___  / |
  / _ \| | | | |_ / _` |/ _` | '_ \ / _ \ | |
 / ___ \ |_| |  _| (_| | (_| | |_) |  __/ | |
/_/   \_\__,_|_|  \__, |\__,_|_.__/ \___| |_|
                  |___/      
*/
// Name: mainA.
// Comments: Main function for the task A
// Author: Tjark Ziehm [MTR:936030]
// Version: 0.01
// Date: January. 2020
// APT Install: Figlet
// needed Extensions: (Visual Studio Code), Todo Tree, (or TODO Highlight ), GitLens,
//                    Bracket Pair Colorizer, Prettier Formatter
// https://de.wikibooks.org/wiki/C-Programmierung:_Ausdr%C3%BCcke_und_Operatoren
//=========================================================================================
// Structure
//=========================================================================================

/*
// TODO:

// FIXME:
*/

//=========================================================================================

#include <stdio.h> // EOF in stdio.h als -1 definiert
#include <stdbool.h>
#include <stdlib.h>

#include "bib.h"

int main(void)
{
    // TODO: understand the AND Operator
    // 1. takes two bits at a time and perform AND operator 2. AND(&) is binary.Takes two numbers and perform bitwise AND 3. Result of AND is 1 when both bits are 1
    //  2 & 3 // Result: 0010 & 0011 = 0010 -> 2
    int value = (2 & 3);
    printf("Value ( 2 & 3 ): %d\n\n", value);

    //  2 & 4 AND Operator // Result: 0010 & 0100 = 0000 -> 0
    int value1 = (2 & 4);
    printf("Value1 ( 2 & 4 ): %d\n\n", value1);

    // TODO: Add name specification for &&
    //  2 && 4 // Result:  0010 & 0100 = 0000 
    int value2 = (2 && 4);
    printf("Value2 ( 2 && 4 ): %d\n\n", value2);

    //  2 | 4 OR Operator// Result: 2
    int value3 = (2 | 4);
    printf("Value3 ( 2 | 4 ): %d\n\n", value3);

    //  2 ^ 3 // Result: 2
    int value4 = (2 ^ 3);
    printf("Value4 ( 2 ^ 3 ): %d\n\n", value4);

    //  3 << 1 // Result: 2
    int value5 = (3 << 1 );
    printf("Value5 ( 3 << 1  ): %d\n\n", value5);

    //  3 << 2 // Result: 2
    int value6 = (2 && 4);
    printf("Value6 ( 2 && 4 ): %d\n\n", value6);

    //  9 >> 2 // Result: 2
    int value7 = (9 >> 2);
    printf("Value7 ( 9 >> 2 ): %d\n\n", value7);

    // 2 ~ 4 NOT Operator // Result: 
    int value8 = (9 >> 2);
    printf("Value8 ( 9 >> 2 ): %d\n\n", value8);

    return 0;
}
