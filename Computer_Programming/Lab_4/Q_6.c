//sum of first n natural number using for loop
#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("Enter a Number\n");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}
