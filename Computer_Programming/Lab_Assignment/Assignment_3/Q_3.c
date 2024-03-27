#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The Three Numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c) 
    {
        printf("The Greatest Number is %d\n",a);
    }
    else
    {
        if (b>c && b>a)
        {
            printf("The Greatest Number is %d\n",b);
        }
        else
        {
            printf("The Greatest Number is %d\n",c);
        }
        
    }
    return 0;
}