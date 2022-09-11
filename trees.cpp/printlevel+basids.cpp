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
int height(node*root){
    if(root==NULL)
    return 0;
    else{
 int k=height(root->left);
 int l=height(root->right);
 return max(l,k)+1;
 }}
 /*int bal(node*root){
    if(root==NULL)
    return 0;//to check tree is bal and find height at same time
 int k=bal(root->left);
 if(k==-1)
 return -1;
 int l=bal(root->right);
 if(l==-1)
 return -1;
if(abs(l-k)>1)
return -1;
return max(l,k)+1;
 }*/

 int size(node*root){/* no of nodes t()=n,s()=h;*/
     if(root==NULL)
     return 0;
    return size(root->left)+size(root->right)+1;
     
 }
 int maxi(node*root){
     if(root==NULL)
     return INT_MIN;
    return max(root->data,max(maxi(root->left),maxi(root->right)));
     
 }
/* brute force use two functions one to print at kth level and next to print for all levels
O(h*n)-time comp
void print(node*root,int k){
    if(k==0){
               cout<<root->data<<" ";
return;}
    print(root->left,k-1);
       
     print(root->right,k-1);
};
void printlevel(node*root,int k){
    cout<<root->data<<endl;
    for(int i=2;i<=k;i++){
        print(root,i-1);
        cout<<endl;
    }
}*/
/* using a queue is bettere than brute force but it will print all in one line not like 10
20 30
40 5 0//10 20 30 40...
void print(node*root){
     queue<node*>q;
     q.push(root);
     while(!q.empty()){
         node*curr=q.front();
         q.pop();
         cout<<curr->data<<" ";
         
         if(curr->left!=NULL){
         q.push(curr->left);
           }
         if(curr->right!=NULL){
         q.push(curr->right);
           }
     }
     
 }*/
/* this is to print level wise
 void print(node*root){
     queue<node*>q;
     q.push(root);
     q.push(NULL);
     while(q.size()>1){
         node*curr=q.front();
         q.pop(); 
         if(curr==NULL){
             cout<<endl;
             q.push(NULL);
             continue;
         }
         cout<<curr->data<<" ";
         if(curr->left!=NULL)
         q.push(curr->left);
         if(curr->right!=NULL)
         q.push(curr->right);
 }}
void print(node*root){
     queue<node*>q;
     q.push(root);
     while(!q.empty()){
         int k=q.size();
         for(int i=1;i<=k;i++){
         node*curr=q.front();
         q.pop();    
         cout<<curr->data<<" ";
         if(curr->left!=NULL)
         q.push(curr->left);
         if(curr->right!=NULL)
         q.push(curr->right);
           }
           cout<<endl;
     }
 }*/

int main(){
     node*root=new node(50);
     root->left=new node(40);
     root->right=new node(30);
  root->left->left=new node(20);
   root->left->right=new node(10);
    root->right->left=new node(60);
     root->right->right=new node(5);
     int h=height(root);
   
   //  printlevel(root,h);
}