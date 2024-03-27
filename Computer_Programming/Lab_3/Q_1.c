#include<stdio.h>
int main()
{
    int m,p,c,x,y,z,t;
    printf("Enter the marks obtained in Maths,Physics,Chemistry\n");
    scanf("%d%d%d",&m,&p,&c);
    x = m;
    y = p;
    z = c;
    t = (m+p+c)/3;
    if(x >= 33 && y >= 33 && z >= 33 && t>= 40)
    {
        printf("The Student is Pass\n");
    }
    else
    {
        printf("The Student is Fail\n");
    }
    return 0;
}