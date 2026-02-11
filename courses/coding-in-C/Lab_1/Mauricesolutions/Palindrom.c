#include <stdio.h>
#include <string.h>

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

}

/*----------------------------------------------------------------*/
// Input_String
/*----------------------------------------------------------------*/


int main()
{

Satz_bilden();

 return 0;
}
