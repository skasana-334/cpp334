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
 node*input2(){
     int d;
     cin>>d;
     node*h=NULL;
     node*tail=NULL;
     while(d!=-1){
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
 void print(node *h){
        node*temp=h;
        while(temp!=NULL){
            cout<<temp->data<<" "<<temp->next<<" ";
            temp=temp->next;
        }
    }
node*del(node*head,int pos){
if(head->next==NULL)
return head;
if(pos==0){
    head=head->next;
    return head;
}

head->next=del(head->next,pos-1);/*it si to connect the initial part of linked list to part after deletoion as head have address of 
starting ll so head.next store address of rem one*/
return head;
}
int main(){
    node*head=input2();
    print(head);
    int d;
    cin>>d;
    head=del(head,d);
    print(head);
}