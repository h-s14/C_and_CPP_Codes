#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a;
    srand(time(0));
    a = rand()%100 + 1;
    printf("The number is %d",a);
    return 0;
}