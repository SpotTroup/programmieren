//=========================================================================================
//
//   ____                                                _                     
// |  _ \ _ __ ___   __ _ _ __ __ _ _ __ ___  _ __ ___ (_) ___ _ __ ___ _ __  
// | |_) | '__/ _ \ / _` | '__/ _` | '_ ` _ \| '_ ` _ \| |/ _ \ '__/ _ \ '_ \ 
// |  __/| | | (_) | (_| | | | (_| | | | | | | | | | | | |  __/ | |  __/ | | |
// |_|   |_|  \___/ \__, |_|  \__,_|_| |_| |_|_| |_| |_|_|\___|_|  \___|_| |_|
//                  |___/    
// Name: main.c
// Comments: Main function for the task 6 from 49
// Author: Tjark Ziehm (MTR: 93060)
// Version: 0.01
// Date: January. 2020
//=========================================================================================
// Structure 
//=========================================================================================

/*
* Index:
*/

//=========================================================================================

#include <stdio.h> // srand(), rand()
#include <stdbool.h>
#include <stdlib.h>
#include <time.h> // time() for randomize

#include "bib.h"

#define LENGTH 6

int main()
{
    // int data[LENGTH] = {0};
    // int Glueckszahlen[LENGTH] = {0};
    // int gezogeneGlueckszahlen = 0;

    /*test
    */ 

    int draws = 6;
    int highest = 49;
    int lowest = 1;
    int count = 1;
    
    srand(time(0));
    int randomSelection[draws];

    //int userInputNumbers(int userChoise[], int LENGTH);

    //Aufgabenstellung : wie viele Kombinationen beim einfachen Zahlen-Lotto 6 aus 49 möoglich (Binomialkoeffizient 49 über 6: "n über k es gilt n, k ∈ N mit k ≤ n -> n = 49, k = 6")
    //Disclaimer and Welcome Text with game declaration
    printf("Herlich Willkommen bei 6 aus 49.\n");
    printf("Glücksspiel kann süchtig machen. Glücksspielsucht kann schwerwiegende Folgen haben, zum Beispiel familiäre Probleme oder auch totale Zahlungsunfähigkeit. Nur wenn die Sucht rechtzeitig wahrgenommen wird, kann persönlicher und finanzieller Schaden noch abgewandt werden. Zu den Anzeichen einer Spielsucht gehören: macht mit! Stück für Stück zum Bruttonationalglück, werdet aktiv und somit selbst zum Glücksbotschafter! Glücksspiel kann süchtig machen, bitte spiele verantwortungsvoll\n");


    
    //Defines the choise of the lottery and store values in an array
    randomNumbersToArray(lowest, highest, count, draws, randomSelection);

    // int user_input;
    // int length = 0;

    // printf("Das Spiel beginnt. Gebe nun %d unterschiedliche Zahlen ein, groesser 0 und kleine 50 sind:\n", LENGTH);

    // do
    // {
    //     scanf("%d", &user_input);

    //     if (user_input > 0 && user_input < 50)
    //     {
    //         data[length] = user_input;
    //         length++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // } while (length < LENGTH);

    // for (int i = gezogeneGlueckszahlen; i < LENGTH; i++)
    // {
    //     int random_number = 0;
    //     srand(time(NULL)); // Damits nicht immer die gleichen Zahlen gibt
    //     random_number = rand() % 49 + 1;

    //     Glueckszahlen[gezogeneGlueckszahlen] = random_number;
    //     printf("Es wurde die: %i ausgelost.\n", random_number);

    //     gezogeneGlueckszahlen++;
    // }

    // if (gezogeneGlueckszahlen == LENGTH)
    // {
    //     printf("Die Würfel sind gefallen. Nein... die Kugeln.");
    //     return 0;
    // }

    // int controll()
    // {
    //     for (int i = 0; i < LENGTH; i++)
    //     {
    //         int Eingabe = Glueckszahlen[i];
    //     }
    //     return 0;
    // }

    // int min = minArray(data, length);
    // int max = maxArray(data, length);

    // printf("Min: %d\n", min);
    // printf("Max: %d\n", max);

    return 0;
}
