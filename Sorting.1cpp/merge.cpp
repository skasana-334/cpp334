#include <bits/stdc++.h>
using namespace std;
/* we divide the array into two halves and sort them and then merge*/
/* in c++ we first declare the function to use in another one so thatswhy 
we are calling it first before sort*/
void merge(int arr[],int l,int r,int m){
    /* wemake two arrays to add the elements of corresponding halves*/
    int n1=m-l+1;
    int n2=r-m;
    int l1[n1],r1[n2];
    for(int i=0;i<n1;i++){
        l1[i]=arr[l+i];}/* if we take arr[i]=l1[i] it will start from 0 s
        so it can change the value of l1[0] but we need to change the value of
        a particular range like my array is sorted till 1 index so i will do it from
        [1+i];*/
        for(int j=0;j<n2;j++){
            r1[j]=arr[m+1+j];
        }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(l1[i]<=r1[j]){
        arr[k]=l1[i];
        i++;}
        else{
            arr[k]=r1[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=l1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=r1[j];
      
        j++;
          k++;
    }
}
void sort(int arr[],int l,int r){
    if(l>=r)
    return;
    int m=(r+l-1)/2;
        sort(arr,l,m);
        sort(arr,m+1,r);
        merge(arr,l,r,m);
}

void printArray(int A[],int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main(){
    int ar[]={1,8,5,6,4,29,550};
   
    sort(ar,0,6);
   printArray(ar,7);
   return 0;
}

