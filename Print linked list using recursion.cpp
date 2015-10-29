#include<iostream>
using namespace std;

// Declare Custom data type struct
struct Node
{
    int data;
    Node* next;
};

// Ia an item to Link list
Node* Insert(Node *head, int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    return temp;

}

// Print link list
void Print(Node *head)
{
    if (head == NULL) return;
    cout << head->data << " ";
    Print(head->next);
    cout << endl;
}


// Print link list
void ReversePrint(Node *head)
{
    if (head == NULL) return;
    ReversePrint(head->next);
    cout << head->data << " ";
}



int main()
{
    Node *head = NULL;
    head = Insert(head, 5);
    head = Insert(head, 4);
    head = Insert(head, 3);
    head = Insert(head, 2);
    head = Insert(head, 1);

    cout << "List is : ";
    Print(head);

    cout << "Reverse list is : ";
    ReversePrint(head);

    return 0;
}
