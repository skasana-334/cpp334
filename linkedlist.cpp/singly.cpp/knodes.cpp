#include<bits/stdc++.h>
using namespace std;
class node{
    public:
 int data;
 node*next;
 node(int a){
     data =a;
     next=NULL;
 }
};
int c=0;
 node*input2(){
     int d;
     cin>>d;
     node*h=NULL;
     node*tail=NULL;
     while(d!=-1){
         c++;
         node*n=new node(d);
         if(h==NULL){
             h=n;
             tail=n;
         }
         else{
             tail->next=n;
             tail=tail->next;
         }
         cin>>d;
     }
return h;
 }
 node* move(node*head,int n){
     node*temp=head;
     int i=1;
     while(i<c-n){
         temp=temp->next;
         i++;
     }
     if(temp!=NULL&&temp->next!=NULL){
     node*temp2=temp->next;
     temp->next=NULL;
     node*temp3=temp2;
     while(temp2->next!=NULL){
         temp2=temp2->next;
     }
     temp2->next=head;
     head=temp3;}
     return head;
 }
 void print(node*head){
     node*temp=head;
     while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
     }
     cout<<endl;
 }
 int main(){
     int t;
     cin>>t;
     while(t--){
         node*head=input2();
         int n;
         cin>>n;
         head=move(head,n);
         print(head);
     }
 }