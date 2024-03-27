#include<stdio.h>
int main()
{
    float pi = 3.14;
    float r,area;
    printf("enter the value of radius\n");
    scanf("%f",&r);
    area = pi*r*r;
    printf("area of the circle is %f\n",area);
    return 0;
}