//sum of first n natural numbers using while loop
#include<stdio.h>
int main()
{
    int a,i=0,sum=0;
    printf("Enter a Number\n");
    scanf("%d",&a);
    while (i<=a)
    {
        sum += i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}