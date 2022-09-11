#include<bits/stdc++.h>
using namespace std;
class node{
    public:
/*this is for binary tree as general tree will be in graphs annd binary has atmost 2 child*/
    int data;
    node*left;
    node*right;
    node(int k){/*constructor*/
        data=k;
        left=right=NULL;
    }
};
/* height of a tree*/
int height(node*root){
    if(root==NULL)
    return 0;
    else{
 int k=height(root->left);
 int l=height(root->right);
 return max(l,k)+1;
 }



}
/*
 1. Traverse the left subtree, i.e., call Inorder(left-subtree)
   2. Visit the root.
   3. Traverse the right subtree, i.e., call Inorder(right-subtree)*/
void inorder(node*root){
    if(root==NULL)
    return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
/* 1. Visit the root.
   2. Traverse the left subtree, i.e., call Preorder(left-subtree)
   3. Traverse the right subtree, i.e., call Preorder(right-subtree) */
void preorder(node*root){
    if(root==NULL)
    return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root){
    if(root==NULL)
    return ;
    postorder(root->left);
    postorder(root->right);
      cout<<root->data<<" ";
}
int main(){
     node*root=new node(50);
     root->left=new node(40);
     root->right=new node(30);
  root->left->left=new node(20);
   root->left->right=new node(10);
    root->right->left=new node(20);
     root->right->right=new node(5);
     postorder(root);
}