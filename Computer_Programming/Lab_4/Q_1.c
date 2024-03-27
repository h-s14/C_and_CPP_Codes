//to print multiplication table of a given number
#include<stdio.h>
int main()
{
    int i,a;
    printf("Enter The Number\n");
    scanf("%d",&a);
    for(i=0;i<=10;i++)
    {
        printf("%d\n",a*i);
    }
    return 0;
}