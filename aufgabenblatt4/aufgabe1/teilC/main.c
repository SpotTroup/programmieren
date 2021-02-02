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

int main()
{
    // TODO: Erklärung für die Auswirkung  0177(oct)=127(dezimal)=1111111(binär) und x = 0 || x = 1 mit dem UND-Operator
    
    int xOne = 0;
    int xTwo = 1;

    // der logische UND Operator schaut nach 1er Paaren und interpretiert diese als 1, alle anderen Paarkosntelationen werden 0
    xOne = xOne & 0177;  // 0000 0000 & 0111 1111 = 0000 0000 = 0
    xTwo = xTwo & 0177;  // 0000 0001 & 0111 1111 = 0000 0001 = 1

    printf("Ergebnis, wenn x gleich 0 ist %d\n", xOne);
    printf("Ergebnis, wenn x gleich 1 ist %d\n\n", xTwo);       
    printf(" Der Oktalwert verliert seine Bedeutung, da nur 1-er Paarungen auftreten könnne, die binär dem x entsprechen.\n");

    //Der Logische UND-Operator mit einem folgenden NOT Operator ( Invertierte Binärzahl 63(oktal) ->  0011 1111(binär) )
    int yOne = 0;
    int yTwo = 1;

    yOne = yOne & ~077;  // 000000 & 000000 -> 0
    yTwo = yTwo & ~077;  // 000001 & 000000  -> 0
    

    printf("Ergebnis, wenn x gleich 0 ist %d\n", yOne);
    printf("Ergebnis, wenn x gleich 1 ist %d\n\n", yTwo);  
    printf("Das Ergebnis wird immer 0 sein solange die invertierte Zahl keine 1 enthält.");

    return 0;
}
