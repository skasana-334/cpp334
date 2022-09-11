int c=0;
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
         c++;
         cin>>d;
     }
return h;
 }
 /* this is brute force approach to get midpoint of ll
void midp(node*head,int i=0){
       if(c%2==0&&i==(c/2)-1)
       cout<<head->data<<" ";
        if(i==c/2){
        cout<<head->data;
        return;}
        midp(head->next,i+1);
}*/

/* efficient method in which we do't require length*/
int mid(node*head){
node*s=head;
node*fast=head;
while( fast !=NULL&&fast->next!=NULL){/* we are taking these as we can't do null->next it is not valid*/
       s=s->next;
       fast=(fast->next)->next;
}
return s->data;}

int main(){
    node*head=input2();
    int h=mid(head);
    cout<<h;
    return 0;
}
