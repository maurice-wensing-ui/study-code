#include <stdio.h>

char charBoardGrenze; // Board Grenze und Linien
char charSpalten; // Spalten beschriftung
int intZeilen; // For Schleife für Zeilen
int intZeilenNummer; // Zeilen nummerierung
char charWeiß_Schwarz; //Schleife für Muster
int intVariable = 9; // Zeilen nummerierung
int inti = 0; // zählt die Zeilen
int intg = 0; // zählt die Spalten

int main()
{

/*----------------------------------------------------------------*/
// Obere Beschriftung
/*----------------------------------------------------------------*/

    {
    
        for (charBoardGrenze = 0; charBoardGrenze < 10; charBoardGrenze++)
        {
                printf("+-----");
        }
        printf("+\n");


        printf("|     ");
        for (charSpalten = 'A'; charSpalten <= 'H'; charSpalten++)
            {
                printf("|  %c  ", charSpalten);
            }
            printf("|     |\n");

                for (charBoardGrenze = 0; charBoardGrenze < 10; charBoardGrenze++)
            {
                printf("+-----");
            }
            printf("+\n");
    }


/*----------------------------------------------------------------*/
// Schleife für Spalten
/*----------------------------------------------------------------*/

for (intZeilenNummer = 1; intZeilenNummer < 17; intZeilenNummer++)
{
    if (inti%2 == 1) // Zeile mit Nummerirung
    {
        intVariable--;
        printf("|  %d  |", intVariable); // Zeilen nummerierung vorne

    /*----------------------------------------------------------------*/
    // Muster von von Zeile 8 bis 0
    /*----------------------------------------------------------------*/

        for (charWeiß_Schwarz = 0; charWeiß_Schwarz < 8; charWeiß_Schwarz++)
        {
            intg++; // zählt die Spalten

            if (intg%2 == 0)
            {
        
                printf(" ### |");
            }

            else if (intg%2 == 1)
            {
            
            printf("     |");
            
            }
           
        } 

    /*----------------------------------------------------------------*/
    // Zeilen nummerierung hinten
    /*----------------------------------------------------------------*/

        printf("  %d  |\n", intVariable);
        intg++; // +1 damit das Muster entsteht
    /*----------------------------------------------------------------*/
    // Zeile Über der unteren Beschriftung
    /*----------------------------------------------------------------*/

        if (inti%2 == 1){

                for (charBoardGrenze = 0; charBoardGrenze < 10; charBoardGrenze++)
                    {
                        printf("+-----");
                    }
                printf("+\n");
            }

        }
        inti++; // zählt die Spalten


    }


/*----------------------------------------------------------------*/
// Untere Beschriftung
/*----------------------------------------------------------------*/

    {        
        
        printf("|     ");
        for (charSpalten = 'A'; charSpalten <= 'H'; charSpalten++)
            {
                printf("|  %c  ", charSpalten);
            }
            printf("|     |\n");

        for (charBoardGrenze = 0; charBoardGrenze < 10; charBoardGrenze++)
            {
                printf("+-----");
            }
            printf("+\n");

    }

/*----------------------------------------------------------------*/

return 0;
}