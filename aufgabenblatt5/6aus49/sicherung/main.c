#include <stdio.h> // srand(), rand()
#include <stdbool.h>
#include <time.h> // time()

#include "bib.h"

#define LENGTH 6

int main()
{
    // int data[LENGTH] = {0};
    int Glueckszahlen[LENGTH] = {0};

    int gezogeneGlueckszahlen = 0;


    // TODO: einfügen
    // FIXME: NOCH ZU TUN
    int userInputNumbers(int userChoise[], int LENGTH);

    
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

    for (int i = gezogeneGlueckszahlen; i < LENGTH; i++)
    {
        int random_number = 0;
        srand(time(NULL)); // Damits nicht immer die gleichen Zahlen gibt
        random_number = rand() % 49 + 1;

        Glueckszahlen[gezogeneGlueckszahlen] = random_number;
        printf("Es wurde die: %i ausgelost.\n", random_number);

        gezogeneGlueckszahlen++;
    }

    if (gezogeneGlueckszahlen == LENGTH)
    {
        printf("Die Würfel sind gefallen. Nein... die Kugeln.");
        return 0;
    }

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
