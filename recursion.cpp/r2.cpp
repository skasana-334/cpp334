/* Recursion -function call itself
imp-
to solve big and complex problems by breaking into smaller problems
-space complexity is not const
-u can convert rec. soln into iterative very easily*/





#include <bits/stdc++.h>
using namespace std;
 /*int bs(int arr[],int k,int s,int e){
     if (s<=e){
     int m=s+(e-s)/2;// body variable as it is specific for particular call
     if(k==arr[m])
     return m;// since retrun type is int u have to return it every subrecursio call
     if(k<arr[m])
     return (arr,k,m+1,e);
     if(arr[m]>k)
     return (arr,k,s,m-1);}

 }
int main(){
    int arr[]={2,6,9,18,540};
    int k=18;
   cout<<bs(arr,k,0,4);*/


             /* REVERSE A NO

int rev(int n){

   
    int dig=int(log10(n));
 if(n==0)
    return 0;
    return ((n%10)*(pow(10,dig))+rev(n/10));

}
int main(){
    int n=446644;
 int x=rev(n);
 if(x==n)
 cout<<"1";
 else
 cout<<"0";
*/
/* check sorted array
bool sort(int arr[],int n){
   if(n==1)
   return true;
        return (arr[n-2]<arr[n-1]&&(sort(arr,n-1)));
            
}*/
/* if we have to check
bool ls(int arr[],int k,int n){
    n=n-1;
    if(n<0)
    return 0;
    return (arr[n]==k||ls(arr,k,n));
  
}
int main(){
    int arr[]={1,2,3,6,5};
    int n=5,k=9;
 cout<<ls(arr,k,n);*/



 /* for index



int ls(int arr[],int k,int n){
    if(n==0){
    return -1;}
    if(arr[n]==k){
    return n;}
    else{
    return ls(arr,k,n-1);}
}
int main(){
    int arr[]={1,2,3,6,5};
    int n=sizeof(arr)/sizeof(arr[0]),k=8;
 cout<<ls(arr,k,n-1);
*/

/*
vector<int> ls(int arr[],int k,int n,vector<int>v){
    if(n==0){
    return v;}
    if(arr[n-1]==k){
        v.push_back(n-1);
    }
    {
    return ls(arr,k,n-1,v);}
}
int main(){
    int arr[]={1,2,3,3,6,5};
    int n=sizeof(arr)/sizeof(arr[0]),k=3;
    vector<int>v;
    
 vector<int>x=ls(arr,k,n,v);
 for(auto i:x)
 cout<<i;

   return 0;
}*/
/*  bubble sort
#include <iostream>
using namespace std;
void bubble(int arr[],int n){
    if(n==1)
    return;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
        {
             swap (arr[i], arr[i+1]);
            
        }
    bubble(arr,n-1);
   
}
int main() {
    int arr[]={1,5,8,4,3,2};
   int n=sizeof(arr)/sizeof(arr[0]);
  bubble(arr,n);
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
	return 0;
}*/
/* insertion sort
void bubble(int arr[],int n,int i=0){
    if(i==n-1)
    return;
    for (int j = i+1;j > 0; j--){
        if (arr[j] < arr[j - 1])
        {
             swap (arr[j], arr[j-1]);
            
        }
        else
        break;}
    bubble(arr,n,i+1);
   
}
int main() {
    int arr[]={1,3,3,5,7,8,8,4,3,2};
   int n=sizeof(arr)/sizeof(arr[0]);
  bubble(arr,n,0);
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
	return 0;
}*/

/* remove duplicates
#include <bits/stdc++.h>
using namespace std;

vector<char>dups(string s,int n,vector<char>v){
    if(n==0){
    return v;}
    
    
    if(s[n-1]!=s[n-2]){
        v.push_back(s[n-1]);
    }
    
    return dups(s,n-1,v);
    
}
int main(){
   string s="geeksforgeeks";
   int n=s.size();
   vector<char>x;
   vector<char>v=dups(s,n,x);
 for(int i=v.size()-1;i>=0;i--)
 cout<<v[i];

   return 0;
}*/