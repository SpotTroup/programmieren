#include <stdio.h>
#include "bib.h"

// Definition
void printEvenOrOdd(int number)
{
    if ((number % 2) == 0)
    {
        printf("Even!\n");
    }
    else
    // TODO: noch zu machen
    {
        printf("Odd!\n");
    }
}

// Definition
int getNumberFromUser()
{
    int number_from_user; //0x00: 12

    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}

// Definition
unsigned int factorial(unsigned int i)
{
    if (i <= 1)
    {
        return 1;
    }

    return i * factorial(i - 1);
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
float meanArray(int array[], unsigned int length)
{
    float mean = 0.0f;
    unsigned int sum = 0u;

    for (int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }

    mean = sum / length;

    return mean;
}

// Definition
int userInputNumbers(int userChoise[], unsigned int LENGTH)
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