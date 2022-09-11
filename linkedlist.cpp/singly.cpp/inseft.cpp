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
    
   node* ins(node*head,int data,int pos){
/* since void return type will notwork if we want to insert a node in initial bcz head in argument will not change */
    int c=0;
    node*tem=head;
     node*n=new node(data);
     if(pos==0){
         n->next=head;
         head=n;
         return head;
     }
    while(c<pos-1&&tem!=NULL){
    tem=tem->next;/* it is to handle cases like we have linked list of 5 but we are inserting at 8 pos which is not there*/
    c++;
    }
    if(tem!=NULL){
    n->next=tem->next;
    tem->next=n;}
    /* altaer way
node*a=tem->next;
    tem->next=n;
    n->next=a;*/
    return head;
}

int main(){
    node*head=input2();
    print(head);
    int d,i;
    cin>>d>>i;
   head = ins(head,d,i);
    print(head);
}
