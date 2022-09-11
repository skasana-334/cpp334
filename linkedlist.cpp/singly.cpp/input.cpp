  #include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int a){
        data=a;
        next=NULL;
    }};
node*input(){
    int d;
    cin>>d;
    node*h=NULL;
    while(d!=-1){
    node*n=new node(d);/* we are creating this as if we use only head then at after every iteration the data will be deleted so 
    to store it smewhere so that we can access it*/
 if(h==NULL)
 h=n;
 else{
     node*t=h;
    while(t->next!=NULL){
       t= t->next;
    }
    t->next=n;
 }
 cin>>d;
    }
    return h;
}
 
 node*input2(){/* it is better approach to take input with o(n) here we are making tail to store address of next one*/
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
        node*temp=h;// we atre taking temp variable so that we can use head again when req
        while(temp!=NULL){
            cout<<temp->data<<" "<<temp->next<<" ";
            temp=temp->next;
        }
    }
    int main(){
      node*head=  input2();
        print(head);
        return 0;
    }