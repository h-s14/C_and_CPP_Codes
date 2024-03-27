// WAP to check if a given number is prime or not
#include<stdio.h>
int main()
{
    int a,i,prime;
    printf("Enter The Number\n");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i == 0)
        {
            prime=0;
            break;
        } 
    }
    if(prime == 0)
    {
        printf("The Number is Not prime\n");
    }
    else
    {
        printf("The Number is Prime\n");
    }
    return 0;
}