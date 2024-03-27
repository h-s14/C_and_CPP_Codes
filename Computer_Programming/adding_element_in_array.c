#include<stdio.h>
int main()
{
    int a[15],i,j,n,pos,num;
    printf("Enter The size of Array\n");
    scanf("%d",&n);
    printf("Enter The Elements in The Array\n");
    for(i=0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Entered array before adding an element is:\n");
    for( j = 0 ; j < n ; j++)
    {
        printf("%d\n",a[j]);
    }
    //Position to insert the element
    printf("Enter The Position of Number to be inserted\n");
    scanf("%d",&pos);
    //Number to insert in the array
    printf("Enter The Number to be inserted\n");
    scanf("%d",&num);
    //inserting the element
    for(i = n ; i >= pos ; i--)
    {
        a[i] = a[i-1];
    }
    a[pos-1] = num;
    // incrementing the array
    n++;
    printf("Array after inserting\n");
    for( i = 0 ; i < n ; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}