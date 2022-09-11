node* deletenm(node*head,int m,int n){
    int s=1,d=1;
    node*t1=head,*t2=NULL;
    if(m==0){
    head=NULL;
    return head;}
    while(t1!=NULL){
    while(s<m&&t1!=NULL){
        t1=t1->next;
        s++;
    }
    if(t1==NULL)
    return head;
   t2=t1->next;
    while(d<=n&&t2!=NULL){
     node*t3=t2;
     t2=t2->next;
     delete(t3);
     d++;
    }
    t1->next=t2;
    t1=t2;
    s=1,d=1;}
    return head;
}