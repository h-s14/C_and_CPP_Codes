#include<stdio.h>
int main()
{
    int a=9,b=15,c=16,d=12,e,f;
    e=!(a<b||b<c);
    f=(a>b)?a-b:b-a;
    printf("%d%d",e,f);
    return 0;
}