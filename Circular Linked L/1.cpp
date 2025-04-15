#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    bool is_head;
    
    Node(int data,bool is_head=false)
    {
        this->data=data;
        this->is_head=is_head;
        next=NULL;
    }
};
void traverse_list(Node* head)
{
    Node*temp=head;
    cout<<temp->data<<"-> ";
    temp=temp->next;
    while(temp->is_head!=true  )
    {
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<temp->data;

}
int main()
{
    Node* head =new Node(4,true);
    Node* n1=new Node(5);
    Node* n2=new Node(6);
    Node* n3=new Node(7);
    head->next=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=head;

    traverse_list(head);
    
    return 0;
}
