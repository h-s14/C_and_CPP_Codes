// C program to calculate volume of a Cyllinder
#include<stdio.h>
int main()
{
    float r,h,volume;
    float pi = 3.14;
    printf("enter the radius of cylinder\n");
    scanf("%f",&r);
    printf("enter the height of the cylinder\n");
    scanf("%f",&h);
    volume = pi*r*r*h;
    printf("volume of the cylinder is %f",volume);
    return 0;
}