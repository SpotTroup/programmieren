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

void inputCaseControll(int decissionToInt);
bool leapYear(int year);

int main(void)
{
    int decissionToInt ;
    
    char *Input;
    
    // TODO: CASE für eingabe definieren
    printf("Schaltjahrsuche");
    printf("Wählen Sie eine der folgenden Zahl ein,\n 1 = 2011 \n 2 = 2008\n 3 = 2000\n 4 = 1900\n -> ");
    scanf("%s", &Input);
    // TODO: delete printf 
    printf("%c", Input);


    decissionToInt = atoi(Input);
    // TODO: delete printf 
    printf("%d", decissionToInt);

    //inputCaseControll(decissionToInt);

    return 0;
}

bool leapYear(year)
{
    bool boolLeapYear;

    // jahr % 4 == 0 --> Schaltjahr    true
    // jahr % 400 == 0 --> Schaltjahr  true
    // jahr % 100 == 0 --> Schaltjahr  false
    // else   --> Schaltjahr        false

    if ((year % 4) == 0)
        boolLeapYear = true;
    else if ((year % 4) == 0)
        boolLeapYear = true;
    else if ((year % 100) == 0)
        boolLeapYear = false;
    else
        boolLeapYear = false;

    return boolLeapYear;
}

void inputCaseControll(decissionToInt)
{
    int yearA = 2011;
    int yearB = 2008;
    int yearC = 2000;
    int yearD = 1900;
    int decission;

    switch (decissionToInt)
    {
    case 1:

        printf("Es wird das Jahr %d geprüft.\n", yearA);

        decission = leapYear(yearA);

        if (decission == 1)
            printf("The year %d is a leapyear.", yearA);
        else
            printf("The year %d is NOT a leapyear.", yearA);

        break;

    case 2:
        printf("Es wird das Jahr %d geprüft.\n", yearB);

        decission = leapYear(yearB);

        if (decission == 1)
            printf("The year %d is a leapyear.", yearB);
        else
            printf("The year %d is NOT a leapyear.", yearB);

        break;

    case 3:
        printf("Es wird das Jahr %d geprüft.\n", yearC);

        decission = leapYear(yearC);

        if (decission == 1)
            printf("The year %d is a leapyear.", yearC);
        else
            printf("The year %d is NOT a leapyear.", yearC);

        break;

    case 4:
        printf("Es wird das Jahr %d geprüft.\n", yearD);

        decission = leapYear(yearD);

        if (decission == 1)
            printf("The year %d is a leapyear.", yearD);
        else
            printf("The year %d is NOT a leapyear.", yearD);

        break;

    default:
        printf("Falsche Eingabe\n");
        break;
    }

   
}