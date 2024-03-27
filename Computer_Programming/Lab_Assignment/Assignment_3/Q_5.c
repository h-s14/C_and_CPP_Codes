#include<stdio.h>
int main()
{
    int a,b,x;
    
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Difference\n");
    printf("Enter 3 for Product\n");
    printf("Enter 4 for Division\n");
    scanf("%d",&x);
    printf("Enter The Number a and b\n");
    scanf("%d%d",&a,&b);
    switch (x)
    {
    case 1:printf("The Sum Of The Numbers is %d\n",a+b);
        break;
    case 2:printf("The Difference Of The Numbers is %d\n",b-a);
        break;
    case 3:printf("The Product Of The Numbers is %d\n",a*b);
        break;
    case 4:printf("The Division Of The Numbers is %d\n",b/a);
        break;
    default:printf("ERROR");
        break;
    }
    return 0;
}