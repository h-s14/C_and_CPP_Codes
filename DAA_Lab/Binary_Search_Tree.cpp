#include <iostream>
using namespace std;
class Node // Each node containing data and addresses of its adjacent nodes
{
public:
    int Num;
    Node *left_node;
    Node *right_node;
};
Node *New_Node(int Num)
{
    Node *newnode = new Node();
    newnode->Num = Num;
    newnode->left_node = newnode->right_node = NULL;
    return newnode;
}
Node *Insert_Node(Node *Root_Node, int Num) // Creating a function to insert the data with argument ,
                                            // address of the root node and the element to be inserted
{
    if (Root_Node == NULL) // If tree is empty
    {
        Root_Node = New_Node(Num);
    }
    else if (Num <= Root_Node->Num)
    {
        Root_Node->left_node = Insert_Node(Root_Node->left_node, Num);
    }
    else if (Num <= Root_Node->Num)
    {
        Root_Node->right_node = Insert_Node(Root_Node->right_node, Num);
    }
    return Root_Node;
}
bool Search(Node *Root_Node, int Num)
{
    if (Root_Node == NULL)
        return false;
    else if (Root_Node->Num == Num)
        return true;
    else if (Num <= Root_Node->Num)
        return Search(Root_Node->left_node, Num);
    else
        return Search(Root_Node->right_node, Num);
}
int main()
{
    Node *Root_Node = NULL; // Creating the root node and setting it to NULL(Meaning root node is empty)
    Root_Node = Insert_Node(Root_Node, 15);
    Root_Node = Insert_Node(Root_Node, 10);
    Root_Node = Insert_Node(Root_Node, 20);
    Root_Node = Insert_Node(Root_Node, 25);
    Root_Node = Insert_Node(Root_Node, 8);
    Root_Node = Insert_Node(Root_Node, 12);
    int number;
    cout << "Enter the number to be searched" << endl;
    cin >> number;
    if (Search(Root_Node, number) == true)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}