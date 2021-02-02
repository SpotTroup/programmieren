//=========================================================================================
//
// Name: bib.c
// Comments: c function code for the bib
// Author: Tjark Ziehm (MTR: 93060)
// Version: 0.01
// Date: January. 2020
//=========================================================================================
// Structure
//=========================================================================================

/*
*/

//=========================================================================================

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#include "bib.h"

// Definition
int getSingleNumberFromUser()
{
    int number_from_user; //0x00: 12

    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}

// Definition
int max(int number_a, int number_b)
{
    if (number_a < number_b)
    {
        return number_b;
    }
    else
    {
        return number_a;
    }
}

// Definition
int min(int number_a, int number_b)
{
    if (number_a > number_b)
    {
        return number_b;
    }
    else
    {
        return number_a;
    }
}

// Definition
float mean(int number_a, int number_b)
{
    float sum = number_a + number_b;
    float mean = sum / 2.0f;

    return mean;
}

// Definition
int minArray(int array[], unsigned int length)
{
    int min = 0u;

    for (int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            min = array[i];
        }
        else if (i > 0)
        {
            if (array[i] < min)
            {
                min = array[i];
            }
            else
                break;
        }
    }

    return min;
}

// Definition
int maxArray(int array[], unsigned int length)
{
    int max = 0u;
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            max = array[i];
        }
        else if (i > 0)
        {
            if (array[i] > max)
            {
                max = array[i];
            }
            else
                break;
        }
    }
    return max;
}

// Definition
int userInputNumbersToArray(int userChoise[], unsigned int LENGTH)
{
    unsigned int remainingSelections = LENGTH;
    unsigned int userInput;

    if (remainingSelections > 0)
    {
        int Eingabe;

        for (int i = 0; i < (LENGTH - 1); i++)
        {
            scanf("%d", &userInput);
            userChoise[i] = userInput;
            remainingSelections--;
            printf("Danke.Sie haben %d eingegeben. Geben Sie %d weitere Zahlen ein:", userInput, remainingSelections);
        }
    }
    else
    {
        printf("Danke für die Eingabe. Die Glückszahlen werden gleich gelöst.");
    }

    for (int i = 0; i < (LENGTH - 1); i++)
    {
        printf("%d", userChoise[i]);
    }

    return userChoise;
}

//Definition
int getRandomNumber()
{
    int randomNumber = 0;

    return randomNumber;
}

//Definition
int getRandomNumberRange(int lowest, int highest, int count)
{
    int i;
    int num = 0;
    for (i = 0; i < count; i++)
    {
        num = (rand() % (highest - lowest + 1) + lowest);
        printf("Es wurde die Zahl: %d gezogen\n", num);
    }

    return num;
}

//Definition
int randomNumbersToArray(lowest, highest, count, draws, randomSelection[])
{
    int result = 0;
    for (int i = 1; i < draws; i++)
    {
        result = getRandomNumberRange(lowest, highest, count);
        int pointer = i - 1;
        randomSelection[pointer] = result;
    }
    return result;
}

//Definition
int faculty(n, k)
{
    int fac_n = 1;
    for (int i = 2; i <= n; i = i + 1)
        fac_n = fac_n * i;
    return fac_n;
}