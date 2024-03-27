#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr = &arr[0];
    ptr = ptr + 2;
    if(ptr == &arr[2])
    {
        printf("These pont to the same location\n");
    }
    else
    {
        printf("These point to different loacation in the memmory\n");
    }
    return 0;
}