#include<stdio.h>
float temp(float c)
{
    return ((c * 9.0 / 5.0)  + 32.0);
}
int main()
{
    float ca,fa;
    printf("Enter The temperature in Celcius\n");
    scanf("%f",&ca);
    fa = temp(ca);
    printf("The Temperature in Farenheit %f\n",fa);
    return 0;
}