//=========================================================================================
//
// Name: mainA.
// Comments: Main function to count chars in given document
// Author: Tjark Ziehm (Mtr. 936030)
// Version: 0.01
// Date: January. 2020
//=========================================================================================
// Structure
//=========================================================================================

/**
* Index:
* scanf for input char
* Write-Controll
* Document-Counter
* Output for the counted value
*/

//=========================================================================================

#include <stdio.h> // EOF in stdio.h als -1 definiert
#include <stdbool.h>
#include <stdlib.h>

#include "bib.h"

int main(void)
{
    FILE *fid1, *fid2;
    int counter = 0;
    char searchLetter;
    char next = -2;
    
    printf("Bitte geben Sie einen Buchstaben ein, der gezählt werden soll.");
    printf("->");

    //scanf for input char
    scanf("%c", &searchLetter);
    printf("Das Dokument wird nach dem Buchstaben %c durchsucht.",searchLetter);

    fid1 = fopen("faust.txt", "r");
    fid2 = fopen("count.txt", "w");

    // Write-Controll
    if (fid1 == NULL || fid2 == NULL)
    {
        return 1; // Probleme beim Oeffnen der Datei
    }

    //Document-Counter
    while (next != EOF)
    {
        next = fgetc(fid1);
        if (next != EOF)
        {
            // Count the document for the input character
            if(next == searchLetter) counter++;
            //fprintf(fid2, "%c", next);
        }
    }

    //Output for the counted value
    printf("Das Dokument enthält den Buchstaben %c %d mal.",searchLetter ,counter);
    
    return 0;
}