//Reversing the first k elements of a queue
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse_elements_of_a_queue(int k, queue<int>& Queue)
{

    if (Queue.empty() == true || k > Queue.size())
    {
        return; 
    }
    if (k <= 0)
    {
        return;
    }
    stack<int> Stack;

    //Pushing the first k elements in the queue
    for (int i = 0; i < k; i++) 
    { 
        Stack.push(Queue.front()); 
        Queue.pop(); 
    } 
    //Enqueing the elements of the stack back to the queue
    while (!Stack.empty()) 
    { 
        Queue.push(Stack.top()); 
        Stack.pop(); 
    } 
    //Removing the remaining elements from the queue and enquing them at the end
    for (int i = 0; i < Queue.size() - k; i++) 
    { 
        Queue.push(Queue.front()); 
        Queue.pop(); 
    } 
}

void print_queue(queue<int>& Queue) 
{ 
    while (!Queue.empty()) 
    { 
        cout << Queue.front() << " "; 
        Queue.pop(); 
    }
    cout<<endl;
}

int main()
{
    queue<int>Queue;
    Queue.push(1);
    Queue.push(2);
    Queue.push(3);
    Queue.push(4);
    Queue.push(5);
    Queue.push(6);
    Queue.push(7);
    Queue.push(8);
    Queue.push(9);
    Queue.push(10);
    int k;
    cout<<"Enter the number of element you want to reverse"<<endl;
    cin>>k;


}