// To reverse an array
#include<stdio.h>
int main()
{
    int a[10],b,i,j;
    printf("Enter The Size of array\n");
    scanf("%d",&b);
    printf("Enter The Elements In an Array\n");
    for(i=0;i<b;i++)
    {
        printf("The %d elements is:",i+1);
        scanf("%d",&a[i]);
    }
    printf("The Reversed Array is\n");
    for(j=b-1;j>=0;j--)
    {
        printf("The %d elements is:",j);
        printf("%d\n",a[j]);
    }
return 0;
}
