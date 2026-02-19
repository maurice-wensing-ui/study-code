#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*

int main(void) {
    int x = 10;
    int *p = &x;
    int **pp = &p;


    printf("x = %d\n", x);
    printf("x via p = %d\n", *p);
    printf("x via pp = %d\n", **pp);

    **pp = 42;

    printf("x = %d\n", x);
    return 0;
}



int main(int argc, char **argv)
{

    if (argc < 2)
    {
        printf("Fehler: Bitte mindestens ein Argunment angeben. \n");
        return 1;
    }
    
    for (int i = 0; i < argc; i++)
    {
      // printf("argv[%d]: %s\n", i, argv[i]);
      int c = strlen(argv[i]);
       printf("Argument %d: Adresse = %p Inhalt: '%s' Länge des Textes: %d\n", i, *(argv + i), *(argv + i), c);  
    }
    
    return 0;
}

*/

int main()
{
    int Simulation[10] = {0,0,0,0,0,0,0,0,0,0};
    int *ptr1 = Simulation;
    int *ptr_feld = Simulation;
    int ziel = 0;
    int Simulation_temp[10] = {0,0,0,0,0,0,0,0,0,0};
    int *ptr_temp = Simulation_temp;

    *(ptr1 + 1) = 1;
    *(ptr1 + 3) = 1;
    *(ptr1 + 5) = 1;

    srand(time(NULL));

    for (int n = 0; n < 20; n++)
    {
        /*Temporären Speicher leeren*/
        for (int i = 0; i < 10; i++)
        *(ptr_temp + i) = 0;


        /* Feld ausgeben */
        printf("Time %d: ", n);
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", *(ptr_feld + i));
        }
        printf("\n");


        /* Bewegungen berechnen: nur wenn im Feld ein Teilchen ist */
        for (int i = 0; i < 10; i++)
        {
            if (*(ptr_feld + i) == 1)
            {
                int richtung = rand() % 2;           // 0 links, 1 rechts
                if (richtung == 1)
                {
                ziel = i + 1;
                }
                else
                {
                ziel = i - 1;
                }


                /* Randbedingungen */
                if (ziel < 0) ziel = 0;
                if (ziel > 9) ziel = 9;

                /* Ankunft zählen (für Kollisionen) */
                *(ptr_temp + ziel) = *(ptr_temp + ziel) + 1;
            }
        }

        /* Kollisionen behandeln + temp in 0/1 umwandeln */
        for (int i = 0; i < 10; i++)
        {
            if (*(ptr_temp + i) >= 2)
            {
                //printf("Collision on index %d\n", i);
                *(ptr_temp + i) = 0;
            }
            else if (*(ptr_temp + i) == 1)
            {
                *(ptr_temp + i) = 1;
            }
            else
            {
                *(ptr_temp + i) = 0;
            }
        }

        /* temp -> feld kopieren (neuer Zustand wird aktiv) */
        for (int i = 0; i < 10; i++)
        {
            *(ptr_feld + i) = *(ptr_temp + i);
        }
    }

    return 0;
}
