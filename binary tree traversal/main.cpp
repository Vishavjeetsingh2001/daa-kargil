#include <iostream>

using namespace std;

struct node{
int data;
struct node *l;
struct node *r;
};

struct node *newNode(int data){
struct node *node=(struct node *)malloc(sizeof(struct node));

node->data=data;
node->l=NULL;
node->r=NULL;
return(node);
};

void preordertraverse(struct node *temp){
if(temp!=NULL){
    cout<<" "<<temp->data;
    preordertraverse(temp->l);
    preordertraverse(temp->r);
}
}

void postordertraverse(struct node*temp){
if(temp!=NULL){
    postordertraverse(temp->l);
    postordertraverse(temp->r);
    cout<<" "<<temp->data;
}
}
void inordertraverse(struct node*temp){
if(temp!=NULL){
    inordertraverse(temp->l);
    cout<<" "<<temp->data;
    inordertraverse(temp->r);
}
}
int main()
{
    struct node *root=newNode(5);
    root->l=newNode(7);
    root->r=newNode(8);
    root->l->l=newNode(9);
    root->r->r=newNode(12);

    cout<<" preorder traversal: ";
    preordertraverse(root);
    cout<<"\n inorder traversal: ";
    inordertraverse(root);
    cout<<"\n postorder traversal: ";
    postordertraverse(root);
}
