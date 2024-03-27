//find factorial of a number using while loop
#include<stdio.h>
int main()
{
    int a,i=1,fac=1;
    printf("Enter The Number\n");
    scanf("%d",&a);
    while(i<=a)
    {
        fac *= i;
        i++;
    }
    printf("%d\n",fac);
    return 0;
}