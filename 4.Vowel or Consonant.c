#include<stdio.h>
#include<conio.h>

void check(char);

void main ()
   {
    char character;
    printf("\nEnter any alphabet \n");
    scanf("%c", &character);
    check(character);
    getch();
   }

void check(char ch)
{
    switch(ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case '0':
        case 'U':
        case 'u':
        printf("The alphabet is Vowel.");
    break;
    default:
        printf("The alphabet is Consonant.");
    }
getch();
}
