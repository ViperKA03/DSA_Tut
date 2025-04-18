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
Node* seperate_odd_even(Node* head)
{
    Node* temp=head;

    Node* oddNode=new Node(-1);
    Node* evenNode=new Node(-1);
    Node* oddhh=oddNode;
    Node* evenh=evenNode;
    while(temp)
    {
        if(temp->data%2==0)
        {
                evenNode->next=temp;
                evenNode=evenNode->next;
         }
        else
        {   
            oddNode->next=temp;
            oddNode=oddNode->next;

        }
        temp=temp->next;
    }
    oddNode->next=evenh->next;
    return  oddhh->next;

}

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
    cout<<"\nAfter segregating"<<endl;
    Node* node=seperate_odd_even(head);
    print_list(node);

    return 0;

}