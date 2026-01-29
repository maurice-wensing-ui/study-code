#include <stdio.h>


int a;
char b[20];
char c[20];
char d[25][25];

int main() {

    printf("Geben Sie ihr alter ein.\n");
    scanf("%d", &a);
    printf("Geben Sie ihren Vornamen ein.\n");
    scanf("%s", b);
    printf("Geben Sie ihren Nachnamen ein.\n");
    scanf("%s", c);
    printf("\nSie heißen %s %s und sind %d Jahre alt.\n\n\n", b, c, a);

    /*
    for (size_t i = 0; i < 26; i++)
    {
        printf("\n");
    for (size_t i = 0; i < 26; i++)
    {
        if (i%2 == 0)
        {
            printf("#");
        }
        else
        {
            printf(" ");
        }
        
    }
    }
*/

    

    return 0;
}