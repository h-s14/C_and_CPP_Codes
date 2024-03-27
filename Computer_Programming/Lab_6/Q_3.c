#include<stdio.h>
int main()
{
    int a,*b;
    printf("Enter The Number\n");
    scanf("%d",a);
    a = *b;
    printf("The ten times value of %d is %d",a,10*a);
    
    return 0;
}