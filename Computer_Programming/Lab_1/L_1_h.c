// C program to conver degree celcius to degree fahrenheit
#include<stdio.h>
int main()
{
    float c,f;
    printf("enter the tempertature in degree celsius\n");
    scanf("%f",&c);
    f = (c*9/5)+32;
    printf("the temperature in degree farenheit is %f\n",f);
    return 0;
}