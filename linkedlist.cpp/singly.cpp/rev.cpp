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
        cout<<endl;
    }
    /* recursively*/
node*rev(node*head){
    if(head->next==NULL){
        return head;
    }
    node*ulti=rev(head->next);/*it gives address of last ll*/
      node*temp=head->next;/* it is for 1 2 3 then temp will point 2 */
    temp->next=head;/*2 point 1*/
    head->next=NULL;/*1 point null*/
    return ulti;/* always give address of last ll but after every call temp will vchange to other function*/
}
/* iterative*/
node*rev(node*head){
    node*curr=head;
    node*prev=NULL;
    /* the approach is like that 
    1 2 3 4 5   curr ->1,tem->2 now tem  is for that so we can't loswe our frther ll as now curr->null
    now prev ->curr=NUll;
    curr->temp=2
    now null->1 this is our next iteration*/
    while(curr!=NULL){
        node*temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
int main(){
    node*h=input2();
    node*x=rev(h);
    print(x);
}