#include<stdio.h>
int printer(int*a);
int main()
{
    int i,*j;
    j = &i;
    printf("The address of variable outside the function is %u\n",&i);
    printer(i);
    return 0;
}
int printer()
{
    int *a;
    printf("The address of variable in function is %u\n",&a);
}