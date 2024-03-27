#include<stdio.h>
int main()
{
    int a;
    printf("Enter\n");
    scanf("%d",&a);
    if((a%4 == 0)&&(a%400 == 0 || a% 100 !=0))
    {
        printf("The year is a leap year\n");
    }
    else
    {
        printf("The year is not a leap year\n");
    }
    return 0;
}