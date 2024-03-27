//WAP to calculate the factorial of a given number
#include<stdio.h>
int main()
{
    int a,i,fac=1;
    printf("Enter a Number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fac *= i;
    }
    printf("%d\n",fac);
    return 0;
}