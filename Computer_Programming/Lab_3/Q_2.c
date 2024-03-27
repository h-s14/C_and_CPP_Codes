#include<stdio.h>
int main()
{
    int income;
    printf("Enter The Income per anum in Lacs\n");
    scanf("%d",&income);
    if(income >= 2.5 && income <= 5 )
    {
        printf("The Income Tax slab is 5 Percent\n");
    }
    else
    {
        if(income >= 5 && income <= 10)
        {
            printf("The Income Tax slab is 20 Percent\n");
        }
        else
        {
            if(income > 10)
            {
                printf("The Income Tax slab is 30 Percent\n");
            }
        }
    }
    return 0;
}