//WAP to find the sum of number in multiplication table of 8
#include<stdio.h>
int main()
{
    int a=0,i,sum=0;
    for(i=0;i<=10;i++)
    {
        a = i*8;
        sum += a;
    }
    printf("%d\n",sum);
    return 0;
}