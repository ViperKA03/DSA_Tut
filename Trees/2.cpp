#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        right=NULL;
        left=NULL;
    }
};
void preorder(Node* root)
{
    if(!root) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root)
{
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root)
{
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void level_order_traversal(Node* root)
{
    if(!root)
    {
        cout<< "Root is null"<<endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(q.size())
    {
        Node* front=q.front();
        q.pop();
        cout<<front->data<<" ";
        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
    }

}

int main()
{
    Node* root = new Node(0);
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);
    Node* n7 = new Node(7);
    Node* n8 = new Node(8);
    Node* n9 = new Node(9);
    Node* n10 = new Node(10);

    root->left = n1;
    root->right = n2;

    n1->left = n3;
    n1->right = n4;

    n2->left = n5;
    n2->right = n6;

    n3->left = n7;
    n3->right = n8;

    n4->left = n9;
    n5->right = n10;
    cout<<"Preorder\n";
    preorder(root);
    cout<<"\nInorder\n";
    inorder(root);
    cout<<"\nPostorder\n";
    postorder(root);
    cout<<"\nLevel-Order\n";
    level_order_traversal(root);
    return 0;
}