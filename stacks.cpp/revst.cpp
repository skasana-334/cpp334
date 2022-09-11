#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void insert(stack<int>&s,int x){/*&to pass by reference*/
    if(s.empty()){
        s.push(x);
        return;
    }
    int d=s.top();
    s.pop();
    insert(s,x);
    s.push(d);
}
void rev(stack<int>&s){
    if(s.empty())
    return;
    int a=s.top();
    s.pop();
    rev(s);
    insert(s,a);
}
int main(){
stack<int>p;
for(int i=1;i<=5;i++){
    p.push(i);
}
rev(p);
insert(p,0);
for(int i=1;i<=5;i++){
    cout<<p.top()<<" ";
    p.pop();
}
    
}
