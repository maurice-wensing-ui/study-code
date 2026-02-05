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
    scanf(" %c", &operator);

    printf("Geben Sie die 1. Zahl an.\n");
    scanf("%f", &a);

    printf("Geben Sie die 2. Zahl an.\n");
    scanf("%f", &b);
};

/*----------------------------------------------------------------*/
// Addieren
/*----------------------------------------------------------------*/

void addieren()
{
    c = a + b;
};

/*----------------------------------------------------------------*/
// Subtrahieren
/*----------------------------------------------------------------*/

void subtrahieren()
{
    c = a - b;
};

/*----------------------------------------------------------------*/
// Multiplizieren
/*----------------------------------------------------------------*/

void multiplizieren()
{
    c = a * b;
};

/*----------------------------------------------------------------*/
// Dividieren
/*----------------------------------------------------------------*/

void dividieren()
{
    if (b == 0)
    {

      c = a / b;
    };
}

/*----------------------------------------------------------------*/
// Operator auswahl
/*----------------------------------------------------------------*/
void operator_auswahl()
{
    if (operator == '+')
{
    addieren();
}

else if (operator == '-')
{
    subtrahieren();
}

else if (operator == '*')
{
    multiplizieren();
}

else if (operator == '/')
{
    dividieren();
}
}

/*----------------------------------------------------------------*/
// Ausgabe
/*----------------------------------------------------------------*/

void ausgabe()
{
    if (operator != '+' &&
        operator != '-' &&
        operator != '/' &&
        operator != '*')
    {
       printf("Ungültiger Operator.");
    
    }
    
    else if (b == 0 &&
             operator == '/')
    {
        printf("Mit 0 kann nicht geteilt werden.");
    }
    else
    printf("%f %c %f = %f",a, operator, b, c);
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
