//=========================================================================================
//
// Name: bib.c
// Comments: c function code for the bib
// Author: Tjark Ziehm
// Version: 0.01
// Date: January. 2020
//=========================================================================================

/*
* TODO: 
*/

//=========================================================================================
// Structure
//=========================================================================================

/**
* Index
*/

//=========================================================================================
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#include "bib.h"

int inputCaseControll(userInput)
{
    int decissionA = -1;
    int decissionB = 23;
    int decissionC = 12345678;
    int decissionValue = 0;
    //int x = atoi(userInput);

    switch (userInput)
    {
    case 1:
        printf("Sie haben %d eingegeben\n", userInput);
        printf("Es wird die Zahl %d konvertiert.\n", decissionA);
        decissionValue = decissionA;
        break;
    case 2:
        printf("Sie haben %d eingegeben\n", userInput);
        decissionValue = decissionB;
        ;
        printf("Es wird die Zahl %d konvertiert.\n", decissionB);
        break;
    case 3:
        printf("Sie haben %d eingegeben\n", userInput);
        decissionValue = decissionC;
        printf("Es wird die Zahl %d konvertiert.\n", decissionC);
        break;

    default:
        printf("Falsche Eingabe\n");
        break;
    }

    return decissionValue;
}

// FIXME: set pointer to set const numbits and get data from main
// int getNumBits(numBit){

//     numBits = numBit;
//     return numBits;
// }

// Definition:
// // FIXME: check Parameter and types
// int decToBin(decission)
// {
//     //const numBits = 33;
//     int eingabeBin[32];
//     //printf("%d",userInput);
//     //printf("%d",numBits);
//     //printf("%d",eingabeBin);

//     printf("Ihre Eingabe als binary: ");

//     // write in array from left to right
//     for (int i = (sizeof(decission) * 8); i > 0; i--)
//     {
//         eingabeBin[32 - i] = ((decission & (0x01 << i)) > 0);

//         printf("%d", eingabeBin[32 - i]);
//     }

//     printf("\n");
//     //printf("Controll: Array Value %d\n", eingabeBin[29]);
//     // print the array content from left to right

//     for (int i = 0; i < 32; i++)
//     {
//         int output = eingabeBin[i];
//         // TODO: Write single to array

//         printf("%d", output);
//     }
//     printf("\n");
//     return eingabeBin;
// }

int *decimal_to_binary(n)
{
    int c, d, t;
    char *p;

    t = 0;
    p = (char *)malloc(32 + 1);

    if (p == NULL)
        exit(0);

    for (c = 31; c >= 0; c--)
    {
        d = n >> c;

        if (d & 1)
            *(p + t) = 1 + '0';
        else
            *(p + t) = 0 + '0';

        t++;
    }
    *(p + t) = '\0';

    return p;
}

char *decimal_to_binaryLong(n)
{
    long c, d, t;
    char *p;

    t = 0;
    p = (char *)malloc(32 + 1);

    if (p == NULL)
        exit(0);

    for (c = 31; c >= 0; c--)
    {
        d = n >> c;

        if (d & 1)
            *(p + t) = 1 + '0';
        else
            *(p + t) = 0 + '0';

        t++;
    }
    *(p + t) = '\0';

    return p;
}

// Definition:
// FIXME: check Input Array
// int readOutArrayRL(int givenArray)
// {
//     int arr[] = givenArray;

//     for (int i = 0; i < 10; i++)
//     {
//         printf("element - %d : ", i);
//         scanf("%d", &arr[i]);
//     }

//     printf("\nElements in array are: ");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d  ", arr[i]);
//     }
// }

// size_t sizeArray ( int )

// Definition:
// FIXME: array is pointed wrong
int sizeOfArray(int *givenArray)
{

    int values = (&givenArray)[1] - givenArray;
    printf("[Controll](bib.c)values: %d\n", values);

    // size_t values = sizeof givenArray / sizeof *givenArray;
    // printf("[Controll](bib.c) array values: %d\n", values);
    return values;
}