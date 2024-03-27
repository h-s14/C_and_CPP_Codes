#include<stdio.h>
int main()
{
    float p,r,t;
    printf("Enter p,r,t\n");
    scanf("%f%f%f",&p,&r,&t);
    printf("The Simple Interest is %f",p*r*t/100);
    return 0;
}