//Program to delete an element in an array
#include<stdio.h>
int main()
{
    int a[10],b,i,j,num,pos;
    printf("Enter The Size Of Array\n");
    scanf("%d",&b);
    printf("Enter the elements in the array\n");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Before deleting the Element is:\n");
     for(i=0;i<b;i++)
    {
        printf("    %d",a[i]);
    } 
    printf("\n");  
    printf("Enter The Position of the Element you want to delete\n");
    scanf("%d",&pos);
    for(i=(pos-1);i<b;i++)
    {
        a[i]=a[i+1];
    }
    b--;
    printf("The Array after deleting the element is\n");
    for(i=0;i<b;i++)
    {
        printf("    %d",a[i]);
    }
    printf("\n");
    return 0;
}