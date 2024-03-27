#include<stdio.h>
int main()
{
    int a=69,*b;
    b=&a;
    printf("The Address of variable a is %u\n",&a);
    printf("The Value of the variable is %d\n",*b);
    return 0;
}