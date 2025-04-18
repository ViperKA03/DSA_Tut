#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;       

    }
};
void forward_print(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }

    
}

int main()
{
    Node*head=new Node(1);
    Node*n1=new Node(2);
    Node*n2=new Node(3);

    head->next=n1;
    n1->next=n2;
    
    n2->prev=n1;
    n1->prev=head;
    Node*tail=n2;

    forward_print(head);

    return 0;
}