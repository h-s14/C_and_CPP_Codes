//To Insert an element in an array
#include<stdio.h>
int main()
{
    int a[10],b,i,j,pos,num,ram;
    printf("Enter The size of anrray\n");
    scanf("%d",&b);
    printf("Enter The Elements\n");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Before printing is:");
    for(i=0;i<b;i++)
    {
        printf("    %d",a[i]);
    }
    printf("\n");
    printf("Enter The position where the element is to be inserted\n");
    scanf("%d",&pos);
    printf("Enter The Number You wish to insert\n");
    scanf("%d",&num);
    for(i=b;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=num;
    b++;
    printf("Array after inserting the elements is:");
    for(i=0;i<b;i++)
    {
        printf("    %d",a[i]);
    }
    return 0;
}