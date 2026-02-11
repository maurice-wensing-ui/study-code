#include <stdio.h>

float a;
float b;
float c;
char operator;

/*----------------------------------------------------------------*/
// Einlesen
/*----------------------------------------------------------------*/

void einlesen()
{
    printf("Welche Operation möchten Sie durchführen?(+, -, *, /)\n");
    scanf(" %c", &operator); //Leerzeichen für

    printf("Geben Sie die 1. Zahl an.\n");
    scanf("%f", &a);

    printf("Geben Sie die 2. Zahl an.\n");
    scanf("%f", &b);
};

/*----------------------------------------------------------------*/
// Operator auswahl
/*----------------------------------------------------------------*/
void operator_auswahl()
{
    switch (operator)
    {
    case '+':
        c = a + b;
        break;

    case '-':
        c = a - b;
        break;

    case '*':
        c = a * b;
        break;

    case '/':
        c = a / b;
        break;

    default:
        printf("Ungültiger Operator.");
        break;
    }
}

/*----------------------------------------------------------------*/
// Ausgabe
/*----------------------------------------------------------------*/

void ausgabe()
{

    if (b == 0 && operator == '/')
    {
        printf("Mit 0 kann nicht geteilt werden.");
    }
    else
        printf("%f %c %f = %f", a, operator, b, c);
};

/*----------------------------------------------------------------*/
// Main
/*----------------------------------------------------------------*/

int main()
{

    einlesen();

    operator_auswahl();

    ausgabe();

    return 0;
}
