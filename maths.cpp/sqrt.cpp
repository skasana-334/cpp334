#include <bits/stdc++.h>
using namespace std;

double prec(int p,int n){
   int m,s=0,e=n;
   double x=0.0;
    while(s<=e){/* it is use to check whether a number is perfect sq or not
    if it is not it will not run*/
    
 m=s+(e-s)/2;
 if(m*m==n)
 return m;
 else if(m*m<n)
 s=m+1;
 else
 e=m-1;}
    double inc=0.1;
x=m+inc;
    for(int i=1;i<=p;i++){
        while(x<=n){
        x+=inc;
        }
        x-=inc;
        inc/=10;
    }
    return x;
}
int main(){
  int n=40,p=3;
  
  cout<<prec(p,n);
  return 0;
}