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
    FILE *fid1, *fid2;
    char next = -2; // Nicht EOF, kein gueltiger Buchstabe

    fid1 = fopen("ein.txt", "r");
    fid2 = fopen("aus.txt", "w");
    // Pruefung: Konnten Dateien erfolgreich geoeffnet werden?
    if (fid1 == NULL || fid2 == NULL)
    {
        return 1; // Probleme beim Oeffnen der Datei
    }
    while (next != EOF)
    {
        next = fgetc(fid1);
        if (next != EOF)
            fprintf(fid2, "%c", next);
    }
    return 0;
}