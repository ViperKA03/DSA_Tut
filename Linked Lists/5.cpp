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
class Queue{
    Node* front=NULL;
    Node* back=NULL;
    int count=0;
    public:
    void push(int x)
    {
        count++;
        if (front==NULL)
        {
            Node *nn=new Node(x);
            front=nn;
            back=nn;
        }
        Node *nn=new Node(x);
        back->next=nn;
        back=nn;    
    }
    int frontt()
    {
        if (front==NULL){
        return -1;}

        return front->data;
    }
    int backk()
    {
        if (back==NULL)
        {
            return-1;
        }
        return back->data;
    }
    int size()
    {
        return count;
    }
    void pop(){
        if(front==NULL){
            return;
        }
        front=front->next;
        count--;

    }
};
int main()
{
    Queue q;
    q.push(5);
    q.push(4);
    q.push(6);
    q.pop();
    cout<<q.size();
    

    return 0;
}