#include<stdio.h>
int sumn(int);
int main()
{
    int n,sum;
    printf("Enter the Nth Number\n");
    scanf("%d",&n);
    sum = sumn(n);
    printf("The Sum Of first %d Natural umber is %d\n",n,sumn(n));
    return 0;
}
int sumn(int n)
{
    return ((n*(n + 1))/2);
}