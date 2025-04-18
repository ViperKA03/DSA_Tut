#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class Stack{
    public:
    Node* top=NULL;
    void push(int data)
    {
        if(top==NULL)
        {
            Node* nn=new Node(data);
            top=nn;
            return;
        }
        Node* nn=new Node(data);
        nn->next=top;
        top=nn;
    }
    int peek()
    {
        if (top==NULL) return -1;
        return top->data;
    }
};
int main()
{    
    Stack st;
    st.push(5);
    st.push(6);
    cout<<st.peek();
    return 0;
}