#include<iostream>
using namespace std;

// Declare Custom data type struct
struct Node
{
    int data;
    Node* next;
};

// Ia an item to Link list
Node* push(Node *head, int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    return temp;

}

// PUP A node from Stack

Node* pup(Node *top)
{
    if (top == NULL) return top;
    Node *temp = new Node();
    temp = top;
    top = top->next;

    delete temp;
    return top;
}


// Print link list
void Print(Node *head)
{
    if (head == NULL) return;
    cout << head->data << " ";
    Print(head->next);
    cout << endl;
}



int main()
{
    Node *top = NULL;
    top = push(top, 5);
    top = push(top, 4);
    top = push(top, 3);
    top = push(top, 2);
    top = push(top, 1);


    cout << "List is : ";
    Print(top);
    top = pup(top);
    top = pup(top);

    cout << endl << "New List is : ";
    Print(top);

    return 0;
}
