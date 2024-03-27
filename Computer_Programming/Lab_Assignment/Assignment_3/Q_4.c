#include<stdio.h>
int main()
{
    int x;
    printf("Enter The Number\n");
    scanf("%d",&x);
    switch (x)
    {
    case 1:printf("Today Is Monday\n");
        break;
    case 2:printf("Today Is Tuesday\n");
        break;
    case 3:printf("Today Is Wednesday\n");
        break;
    case 4:printf("Today Is Thursday\n");
            break;
    case 5:printf("Today Is Friday\n");
        break;
    case 6:printf("Today Is Saturday\n");
        break;
    case 7:printf("Today Is Sunday\n");
        break;
    default:printf("ERROR\n");
        break;
    }
    return 0;
}