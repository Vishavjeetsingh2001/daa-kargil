#include <iostream>

using namespace std;

class node{
public:
    int data;
    node *l;
    node *r;
    node(int d){
    int data=d;
    l=r=NULL;
    }
};

int height(node *Node){
if(Node==NULL)
    return 0;

    return 1 +max(height(Node->l),height(Node->r));
}

bool isbalanced(node *root){
int lh;
int rh;
if(root==NULL)
    return 1;
lh=height(root->l);
rh=height(root->r);
if(abs(lh-rh)<=1 && isbalanced(root->l) && isbalanced(root->r))
    return 1;
return 0;
}

int leaf(struct node *root){
if(root==NULL|| (root->l ==NULL && root->r== NULL)){
    return 1;
}
return leaf(root->l) +leaf(root->r);
}

int nonleaf(struct node *root){
if(root==NULL|| (root->l ==NULL && root->r== NULL)){
    return 0;
}
return 1+ nonleaf(root->l) +nonleaf(root->r);
}

int main()
{
    node *root =new node(1);
    root->l=new node(2);
    root->r=new node(3);
    root->l->l=new node(4);
    root->l->r= new node(5);

    cout<<"height of tree is :"<<height(root)<<endl;
    cout<<"no of leaf nodes is :"<<leaf(root)<<endl;
    cout<<"no of non-leaf nodes is :"<<nonleaf(root)<<endl;
    if(isbalanced)
        cout<<"tree is balanced";
    else
        cout<<"tree is not balanced";

    return 0;
}
