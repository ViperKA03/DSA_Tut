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
Node* insert(int value, int position, Node* head)  // [value], 2nd , 1st,(after)
{
    Node* node=new Node(value);
    Node* temp=head;
    if(position==-1)
    {
        node->next=head;
        return node;
    }
    int count=1;
    while(temp!=NULL && count<position)
    {
        temp=temp->next;
        count++;
    } 
    if(!temp) return head;  // invalid p
    Node* next=temp->next;
    temp->next=node;
    node->next=next;
    return head;

}

Node* deleteNode(){}
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

    cout<<endl<<"After inserting"<<endl;
    head=insert(55,0,head);
    print_list(head);
    return 0;
}