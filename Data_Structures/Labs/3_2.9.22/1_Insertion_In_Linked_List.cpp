#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node * next;
};
struct node * head = NULL;
struct node* create(int size)
{
    for (int i = 0; i < size ; i++)
    {
        struct node* s = new (struct node);
    }
    
}
void display(struct node* head)
{
    struct node* s = head;
    while(s != NULL)
    {
        cout<< s->data <<endl;
        s = s->next;
    }
}
struct node* delete_begin(struct node* head)
{
    head = head -> next;
    return head;
}
int main()
{
    int size;
    cout<<"Enter size of linked list\n";
    cin>>size;
    head = create(size);
    struct node* first = new(struct node);
    struct node* second = new(struct node);
    struct node* third = new(struct node);
    struct node* fourth = new(struct node);

    first->data = 11;
    first->next = second;

    second->data = 12;
    second->next = third;

    third->data = 13;
    third->next = fourth;

    fourth->data = 14;
    fourth->next = NULL;
    
    head = first;

    display(head);
    head = delete_begin(head);

    cout<<"\n\nAfter deleting first node\n";
    display(head);

    return 0;
}