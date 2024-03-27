#include<stdio.h>
int main()
{
    int a;
    printf("Enter The Year\n");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("The Year is a Leap Year\n");
    }
    else
    {
        printf("The Year isn't a Leap Year\n");
    }    
    return 0;
}