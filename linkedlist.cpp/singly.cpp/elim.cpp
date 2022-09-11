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
 /* for sorted*/
 void remove(node* head) {
    node* current = head; 

    node* temp; 
    while (current->next != NULL) 
    { 
    if (current->data == current->next->data) 
    {
        temp = current->next->next; 
        free(current->next); /* it is important to deallocate the node*/
        current->next = temp; 
    } 
    else 
        current = current->next; 
    } 
    } 
} 
/* for unsorted*/
void remove(node* head)
{
    node *ptr1, *ptr2, *dup;
    ptr1 = head;
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
             while (ptr2->next != NULL){
            if (ptr1->data == ptr2->next->data) {
                    dup=ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else 
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
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
    remove(head);
    print(head);}
   
}