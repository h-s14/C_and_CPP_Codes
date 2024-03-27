#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert_at_head(node* head , int val)
{
    node* n = new node(val);
    node* temp = head;
    if(head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = n ;
    n->next = head;
    head = n;

}
void insert_at_tail(node* &head , int val)
{
    node* n = new node(val);
    node* temp = head;
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;

}

void display(node* head)
{
    node* temp = head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    } while (temp != head);
    cout<<"NULL"<<endl;
    
}
void display_2(node* head)
{
    node* temp = head;
    do
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }while (temp != head);
        cout<<"NULL"<<endl;    
}
void insert_at_tail_2(node* &head, int val)
{
    node* n = new node(val);
    node* temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp -> next = n ;
    n -> next = head;
}
void insert_at_head_2(node* head, int val)
{
    node* n = new node(val);
    node* temp = head;
    if(head == NULL)
    {
        n -> next = n;
        head = n;
        return;
    }
    while(temp -> next != n)
    {
        temp = temp -> next;
    }
    temp -> next = n;
    n -> next = head;
    head = n;

}
void insert_at_head_3(node* hewad, int val)
{
    node* n = new node(val);
    node* temp = head;
    if(head == NULL)
    {
        n -> next = n;
        head = n;
        return;
    }
    while(temp -> next != n)
    {
        
    }
}
int main()
{
    node* head = NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_head(head,5);
    display(head);   
    return 0;
}