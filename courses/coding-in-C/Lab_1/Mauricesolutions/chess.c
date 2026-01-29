#include <stdio.h>

int zeilen;

char spalten;


int main()
{
    printf("----------Schachbrett----------\n");
for (zeilen = 8; zeilen >= 1; zeilen--)
{
    for (spalten = 'A'; spalten <= 'H'; spalten++)
    {
        printf(" %c%d ", spalten, zeilen);
    }
    printf("\n");
}
    return 0;
}
