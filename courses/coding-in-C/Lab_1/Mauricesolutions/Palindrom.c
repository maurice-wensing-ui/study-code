#include <stdio.h>
#include <string.h>


char Palindrom[100];
char array[100];

/*----------------------------------------------------------------*/
// Satz bilden
/*----------------------------------------------------------------*/
void Satz_bilden()
{
char Satz[100];
strcpy(Satz, "Curly bird catches the worm");

printf("%s\n", Satz);

char *ptr = Satz;

printf("%p\n", ptr);
printf("%s\n", ptr);

*ptr = Satz[0];
*ptr = 'E';
printf("%s\n", ptr);

ptr = &Satz[1];
*ptr = 'a';
printf("%s\n", Satz);
}

/*----------------------------------------------------------------*/
// Input_String
/*----------------------------------------------------------------*/

void input_string()
{
    char *ptr2 = &Palindrom[1];
    
    printf("Geben Sie das Palindrom ein?\n");

    fgets(Palindrom, 100, stdin);
    Palindrom[strcspn(Palindrom, "\n")] = '\0';

    //*ptr2 = 'c';

    //printf("Eingegeben: %s\n", Palindrom);
}

/*----------------------------------------------------------------*/
// Palindrom prüfung
/*----------------------------------------------------------------*/

void palindrom_prüfung()
{
char *ptr3;
int länge = strlen(Palindrom);
ptr3 = &Palindrom[länge-1];


for (int i = 0; i < länge; i++)
{
    array[i] = *ptr3;
    ptr3--;
}

array[länge] = '\0';

};

/*----------------------------------------------------------------*/
// Output
/*----------------------------------------------------------------*/

void output()
{

printf("Eingegeben: %s\nPalindromarray: %s\n", Palindrom, array);

if (strcmp(Palindrom, array) == 0)
{
    printf("%s ist ein Palindrom", Palindrom);
}

else
{
    printf("%s ist kein Palindrom", Palindrom);

};
};


int main()
{

Satz_bilden();

input_string();

palindrom_prüfung();

output();

 return 0;
}
