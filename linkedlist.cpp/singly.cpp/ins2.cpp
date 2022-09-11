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

  node* ins(node*head,int data,int pos){
   if(head->next==NULL)
    return head;
    if(pos==0){
        node*n=new node(data);
        n->next=head;
        head=n;
        return head;
    }
    
   head->next=ins(head->next,data,pos-1);
   return head;
 }
int main(){
    node* head=input2();
    print(head);
    int data,i;
    cin>>data>>i;
    ins(head,data,i);
    print(head);
}