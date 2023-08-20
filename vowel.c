#include<stdio.h>
int main()
{
    char vowel;
    printf("Enter the cahracter:\n");
    scanf("%d", &vowel);
    switch(vowel)
    {
        case 'a':
        printf("it's a vowel\n");
        break;
         case 'e':
        printf("it's a vowel\n");
        break;
         case 'i':
        printf("it's a vowel\n");
        break;
         case 'o':
        printf("it's a vowel\n");
        break;
         case 'u':
        printf("it's a vowel\n");
        break;
        default:
        printf("it's constant");
    }
    return vowel;
}        