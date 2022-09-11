#include<bits/stdc++.h>
using namespace std;
class node{
    public:
node*prev;
 int data;
 node*next;
 node(int a){
     prev=NULL;
     data =a;
     next=NULL;
 }
};
class node1{
    public:
    node1*temp;
}
node*input(){
    int d;
    cin>>d;
    node*head=NULL,*tail=NULL,*temp=NULL;
    while(d!=-1){
        node*n=new node(d);
        if(head==NULL){
        head=n;
        tail=n;
        }
        else{
            tail->next=n;
             
        }
        cin>>d;
    }
   return head;
}
void print(){
    node*temp=
}