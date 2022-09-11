

#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int a){
        data=a;
        next=NULL;
    }

};
    void print(node *head){
        node*temp=head;// we atre taking temp variable so that we can use head again when req
        while(temp!=NULL){
            cout<<temp->data<<" "<<temp->next<<" ";
            temp=temp->next;
        }
    }
int main(){
    node n1(1);
    node*head=&n1;
    node n2(2);
    n1.next=&n2;

node n3(3);
n2.next=(&n3);

node n4(4);
n3.next=&n4;
print(head);
}