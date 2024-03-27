//WAP to check if a number is prime using while loop
#include<stdio.h>
int main()
{
    int a,i=2,prime;
    printf("Enter The Number\n");
    scanf("%d",&a);
    while(i<a)
    {
        if(a % i == 0)
        {
            prime = 0;
            break;
        }
    i++;
    }
    if(prime == 0)
    {
        printf("The Number Is Not Prime\n");
    }
    else
    {
        printf("The Number Is Prime\n");
    }
    return 0;
}