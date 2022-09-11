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

 int print(node*head,int n,int c=0){
    if(head==NULL)
    return -1;
    if(head->data==n)
    return c;
    return print(head->next,n,c+1);
 }

 int main(){
   int t;
   cin>>t;
   while(t--){
     node*h2=input2();
    int n;
    cin>>n;
    int x=print(h2,n);
    cout<<x<<endl;

}
     return 0;}
     