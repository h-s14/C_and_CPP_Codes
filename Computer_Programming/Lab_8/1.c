#include<string.h>
#include<stdio.h>
int main()
{
    char s[10]="Hello";
    char s2[20]="Harry";
    printf("\n");
    int res = strcmp(s,s2);
    printf("%d",res);

    return 0;
}