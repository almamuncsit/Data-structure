#include<iostream>
using namespace std;
#define Max_Size 101

int data[Max_Size], t = -1;

// Push Data to link list
void push(int x)
{
    if (t >= (Max_Size-1) ) {
        cout << "Stack overflow " << endl;
        return;
    }
    t++;
    data[t] = x;
}

// PuP Data to link list
int pop()
{
    t--;
    return data[t+1];
}


// Return Top Item
int top()
{
    return data[t];
}


// Print link list
void Print()
{
    for (int i=0; i<=t; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}


// Check Stack is empty or not
bool empty()
{
    if(t == -1)
        return true;
    else
        return false;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    Print();

    cout << "PUP is : " << pop() << endl;

    cout << "Top is : " << top() << endl;
    return 0;
}
