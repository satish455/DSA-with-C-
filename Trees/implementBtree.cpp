#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node*left;
node*right;

node(int d){
  this->data=d;
  this->left=NULL;
  this->right=NULL;

}




};


node*buildtree(node*root){
    cout<<"Enter The Data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;

    }

    cout<<"enter element for left node"<<endl;
    root->left=buildtree(root->left);
    cout<<"enter element for right node"<<endl;
    root->right=buildtree(root->right);
    return root;
    




}

int main(){
    node*root=NULL;
    root=buildtree(root);

}