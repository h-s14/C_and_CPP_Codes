#include<stdio.h>
float avg(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("Enter The Numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("The Value of Average is %f",avg(a,b,c));
    return 0;
}
float avg(int a,int b,int c)
{
    float r;
    r = (float)(a + b + c)/3;
    return r;
}