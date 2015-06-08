#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node *head;

// Ia an item to Link list
void Insert(int x, int p)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;

    if (p == 1) {
        temp->next = head;
        head = temp;
        return;
    }

    Node *temp1 = head;

    for (int i=0; i<p-2; i++) {
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;

}


// Print link list
void Print()
{
    Node *temp = head;
    cout << "List is : ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    head = NULL;
    cout << "How many numbers : ";
    int n, x, p;

    cin >> n;

    for (int i=0; i<n; i++) {
        cout << "Enter the number " << endl;
        cin >> x >>p;
        Insert(x, p);
        Print();
    }

    return 0;
}
