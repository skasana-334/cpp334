 #include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int a){
        data=a;
        next =NULL;
    }
};
node*input1(){
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
 node*sort(node*h1,node*h2){
     if(h1==NULL){
         return h2;
     }
     if(h2==NULL)
     return h1;
     if(h1->data<h2->data){
         h1->next=sort(h1->next,h2);
         return h1;
     }
     else{
         h2->next=sort(h1,h2->next);
         return h2;
     }
 }
 void print(node*head){
     node*temp=head;
     cout<<temp->data<<" ";
      while(temp!=NULL){
            cout<<temp->data<<" "<<temp->next<<" ";
            temp=temp->next;
        }
        cout<<endl;
 }
 int main(){
     node*h1=input1();
     node*h2=input2();
     node*merge=sort(h1,h2);
     print(merge);
     return 0;}
     