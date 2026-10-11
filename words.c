#include <stdio.h>

void main()
{
    char a;
    printf("Enter the word: ");
    scanf("%c", &a);



    switch (a)
    {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    
        printf("Given word is vowel ");
        break;


        default:
        printf("Given word is consonant");
    }
    
}