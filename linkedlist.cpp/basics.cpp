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
    void p(){
        cout<<data<<" "<<next<<" ";
    }

};
int main(){
    /*statically*/
    node n1(1);
    node*head=&n1;
    node n2(2);
    n1.next=&n2;
/* dynamically*/
node*n3=new node(3);
n2.next=(n3);
node*head1=n3;//not&n3 as in stack memory n3 pointer is creted(8 bytes) which stores the address of n3 node which is in heap memory 
node*n4=new node(4);
n3->next=n4;
n1.p();n2.p();(*n3).p();(*n4).p();

}