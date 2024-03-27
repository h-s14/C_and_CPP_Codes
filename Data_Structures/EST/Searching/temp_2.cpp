#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void push() 
{
   int val;
   if (rear == n - 1)
   {
      cout<<"Queue Overflow"<<endl;
   }
   else 
    {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
    }
}
void pop() 
{
   if (front == - 1 || front > rear) 
   {
      return ;
   } else {
      front++;
   }
}
void Display() 
{
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;

   return 0;
}