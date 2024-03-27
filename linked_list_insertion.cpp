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
        next=NULL;
    }
};

void insert_at_tail(node* &head, int val)
{
    node* n = new node(val);

    if(head == NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next=n;
}

void insert_at_head(node* &head , int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}
void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

//Iterative Way
node* reversed(node* &head)
{
    node* preptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr = currptr->next;
        currptr->next = preptr;

        preptr = currptr;
        currptr = nextptr;
    }
    return preptr;
}
//Recursive Way


bool search(node* head, int key)
{
    node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp = temp -> next;
    }
    return false;

}

void deletion(node* &head, int val)
{
    node* temp = head;
    while(temp -> next ->data != val)
    {
        temp = temp -> next;
    }
    node* todelete= temp -> next;
    temp ->next=temp->next->next;
    
}
int main()
{
    node* head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_head(head,4);
    display(head);
    // cout<<search(head,3)<<endl;
    // deletion(head,3);
    // display(head);  
    node* newhead = reversed(head);
    display(newhead);
    return 0;
}