//implementation of stack using linked list where all operation are done from beginning pf ll o/w it will be hectic in case of deletion as we have to know the posn and address of prev node which is possible with doubly not singly.

#include <bits/stdc++.h>
using namespace std;
class node{
    public:
   node *next;
   int data;
  
};

node*head;//top
void push(int val){
    node*temp =new node();
   
  
        temp->data=val;
        temp->next=head;
        temp=head;
    
}

void pop(){
if(head==NULL)
cout<<"-1";
    node*temp;
    temp=head;
head=head->next;
free(temp);
}
