
 void print(node *h){
        node*temp=h;
        while(temp!=NULL){
            cout<<temp->data<<" "<<temp->next<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    
  /*void del(node*head,int data,int pos){
    int c=0;
    node*tem=head;
     node*n=new node(data);
    while(c<pos-1){
       tem= tem->next;
    c++;
    }
    if(tem!=NULL){
    node*a=tem->next;
    node*b=a->next;
    tem->next=b;
    delete a;}

}*/
  node* del(node*head,int pos){
      if(pos==0){
          head=head->next;
          return head;
      }
    int c=0;
    node*tem=head;
    while(c<pos-1){
       tem= tem->next;
    c++;
    }
    if(tem!=NULL){
    node*a=tem->next;
    node*b=a->next;
    tem->next=b;
    delete a;}
    return head;

}

int main(){
    node*head=input2();
    print(head);
    int i;
    cin>>i;
 head=del(head,i);
    print(head);
}
