#include<stdio.h>
#include<stdlib.h>
#define MAXLEN 100
typedef struct
{
    int element[MAXLEN];
    int top;
}stack;
stack init()
{
   stack s;
   s.top=-1;
   return s;
}
int isempty(stack s)
{
    return(s.top==-1);
}
int isfull(stack s)
{
    return(s.top==MAXLEN-1);
} 
stack push(stack s, int data)
{
    if(isfull(s))
    {
        printf("stack overflow\n");
    }
    else
    {
        ++s.top;
        s.element[s.top]=data;  
    }
    
    return s;
}
void print(stack s)
{
    int i;
    for(i=s.top;i>=0;i--)
    {
        printf("%d\n",s.element[i]);
    }
}
stack pop(stack s)
{
    if(isempty(s))
    {
        printf("stack underflow\n");
    }
    else
    {
        s.top--;
        return s;
    }
}
int top(stack s)
{
    if(isempty(s))
    {
        printf("stack underflow\n");
    }
    else 
    return s.element[s.top];
}
int main()
{
    stack s;
    s=init();
    s=push(s,12);
    s=push(s,23);
    s=push(s,24);
    s=push(s,30);
    s=push(s,32);
    printf("current stack\n");
    print(s);
    printf("with top = %d\n",top(s));
    s=pop(s);
    s=pop(s);
    printf("current stack\n");
    print(s);
    printf("with top = %d\n",top(s));
    return 0;
}