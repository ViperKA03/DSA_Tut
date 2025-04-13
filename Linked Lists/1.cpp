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
    void print_list(Node *head)
    {
        Node* temp=head;
        while(temp->next!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data;
    } 
int main()
{
    Node *head=new Node(1);
    Node *n1=new Node(2);
    Node *n2=new Node(3);
    Node *n3=new Node(4);
    
    head->next=n1;
    n1->next=n2;
    n2->next=n3;

    print_list(head);

    return 0;
}