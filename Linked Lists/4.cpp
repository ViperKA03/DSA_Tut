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
    int size=0;
    void push(int data)
    {
        size++;
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
    void pop()
    {
        if (!top) return;
        Node* temp=top;
        top=top->next;
        delete temp;
    }
    int sizee()
    {
       
        return size;
    }
};
int main()
{    
    Stack st;
    st.push(5);
    st.push(0);
    st.push(9);
    st.push(6);
    cout<<st.sizee();
    st.pop();
    cout<<"\nAfter popping"<<endl;
    cout<<st.peek();

    return 0;
}