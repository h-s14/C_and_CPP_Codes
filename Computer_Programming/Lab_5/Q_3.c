#include<stdio.h>
float force(float mass);
int main()
{
    float m;
    printf("Enter the Mass in Kg\n");
    scanf("%f",&m);
    printf("The Force of Attraction on body is %f",force(m));
    return 0;
}
float force(float mass)
{
    float result = mass * 9.8;
    return result;
}