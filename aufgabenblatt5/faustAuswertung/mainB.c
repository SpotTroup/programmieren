//=========================================================================================
//
// Name: mainB.c
// Comments: Main function for the task B
// Author: Tjark Ziehm (MTR: 93060)
// Version: 0.01
// Date: January. 2020
//=========================================================================================
// Structure
//=========================================================================================

/*
* Content-Grabber
* Write-Controll
* Document-Counter
* Respective Count-Result
*/

//=========================================================================================
#include <stdio.h> // EOF in stdio.h als -1 definiert
#include <stdbool.h>
#include <stdlib.h>



int intToAscii(int number)
    {
        return 97 + number;
    }

int main(void)
{
    FILE *fid1, *fid2;
    char next;
    int charArray[26] = {0};

    // grabber for the content from file to file
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
            //add 1 to the parameter of array
            if (next >= 97)
                charArray[next - 97]++;

            // printf("%d\n", next);
            // for (int i = 0; i < 25; i++)
            // {
            //     int check = next ;
            //     if (alphabetArray[check])
            //         printf("%d\n", check);
            // }
        }
    }

    // define count of chars to respective char
    for (int i = 0; i <= 25; i++)
    {
        int count = charArray[i];
        int x = i+97;
        char letter = (char)x; 
           
        printf("Ausgabe Element: %c Value: %d\n", letter, count);
    }

    //Output for the counted value
    //printf("Das Dokument enthält den Buchstaben %c %d mal.", searchLetter, counter);

    return 0;
}