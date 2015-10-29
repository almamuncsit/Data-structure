#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* link;
};

int main()
{
    Node *A = NULL;

    Node* temp = new Node();
    temp->data = 2;
    temp->link = NULL;
    A = temp;

    temp = new Node();
    temp->data = 4;
    temp->link = NULL;


    Node* temp1 = A;

    while (temp1->link != NULL) {

    }


    return 0;
}
