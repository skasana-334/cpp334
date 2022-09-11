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
void print(node*root,int k){
    if(k==0){
               cout<<root->data<<" ";
return;}
    print(root->left,k-1);
       
     print(root->right,k-1);
}
int main(){
     node*root=new node(50);
     root->left=new node(40);
     root->right=new node(30);
  root->left->left=new node(20);
   root->left->right=new node(10);
    root->right->left=new node(20);
     root->right->right=new node(5);
     print(root,2);
}