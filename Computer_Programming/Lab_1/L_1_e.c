// C program to calculate the are of rectangle
#include<stdio.h>
int main()
{
    int length,breadth,area;
    printf("Enter the value of Length of Rectangle\n");
    scanf("%d",&length);
    printf("Enter the value of Breadth of REctangle\n");
    scanf("%d",&breadth);
    area = length*breadth;
    printf("The Area of rectangle is %d",area);
    return 0;
}