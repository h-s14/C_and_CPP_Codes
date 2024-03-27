#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Number\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("The Number Is an Even Number\n");
    }
    else
    {
        printf("The Number Is an Odd Number\n");
    }
    return 0;
}