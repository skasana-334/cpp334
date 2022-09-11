#include <bits/stdc++.h>
using namespace std;

int main() {
vector<int>arr={1,2,3,2,69,5};int mx;
int n=arr.size();
//                1) SELECTION sort(O(n^2),O(1));-select the max element or min element and place it in its correctv order
   // best case-O(n);
/*for max element
for(int i=0;i<n-1;i++){

mx=0;

 for(int j=1;j<n-i;j++){
      if(arr[j]>arr[mx])  
        mx=j;
        swap(arr[mx],arr[n-i-1]);}
}*/
/*for min elemnet
for(int i=0;i<n-1;i++){

mx=i;

 for(int j=i+1;j<n;j++){
      if(arr[j]<arr[mx])  
        mx=j;
        swap(arr[mx].,arr[i]);}}*/
        
//   2)INSERTION SORT-sort the elements in patches for e.g first sort two elements then 3 then 4 and so on
/*best case-O(n);
advantage-stable(i.e if there are two no which are same then it will sort according which comes first initialaly)
take part in hybrid sort(merge or quick) and take less time if array is partially sorted*/
for(int i=0;i<n-1;i++){
 for(int j=1+i;j>0;j--){
      if(arr[j]<arr[j-1]) 
        swap(arr[j],arr[j-1]);
        else
        break;}
}/*
int i=0,c;
while(i<n){
    if(arr[i]!=i+1)
    swap(arr[i],arr[arr[i]-1]);
    else
    i++;
}
*/
/*for(auto i:arr)
cout<<i<<endl;
return 0;}*/