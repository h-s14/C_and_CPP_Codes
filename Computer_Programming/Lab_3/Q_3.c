//WAP to determine whether a character is lowercase or upper case
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the alphabet\n");
    scanf("%c",&c);
    if(c >= 'A' && c <= 'Z')
    {
        printf("The Alphabet is uppercase\n");
    }
    else
    if(c >= 'a' && c <= 'z')
    {
        printf("The alphabet is lowecase\n");
    }
    return 0;
}