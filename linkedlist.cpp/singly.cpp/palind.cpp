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
 node* rev(node*head){
     node*curr=head;
     node*prev=NULL;
     while(curr!=NULL){
         node*temp=curr->next;
         curr->next=prev;
         prev=curr;
         curr=temp;
     }
     return prev;
 }
 /* first we get the midpoint then we reverse the ll after midpoint and compare to the initial ll*/
 int palind(node*head){
     node*temp=head;
     node*x=head;int i=0;
     while(i<c/2){
         x=x->next;
         i++;
     }
    x=rev(x);
    while(x!=NULL){
        if(x->data!=temp->data)
        return -1;
        x=x->next;
        temp=temp->next;
    }
    return 1;
 }
  
 void print(node *h){
        node*temp=h;
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
    int y=palind(head);
    cout<<y<<endl;}
   
}