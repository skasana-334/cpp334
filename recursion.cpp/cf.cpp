#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int r,int m){
    int n1=m-l+1;
    int n2=r-m;
    int l1[n1],r1[n2];
    for(int i=0;i<n1;i++){
        l1[i]=arr[l+i];}
        for(int j=0;j<n2;j++){
            r1[j]=arr[m+1+j];
        }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(l1[i]<r1[j]){
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
        k++;
    }
    while(j<n2){
        arr[k]=r1[j];
        k++;
        j++;
    }
};
void sort(int arr[],int l,int r){
    if(l>=r)
    return;
    int m=(r-l)/2;
        sort(arr,l,m);
        sort(arr,m+1,r);
        merge(arr,l,r,m);
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main(){
    int a[]={1,8,5,6,4,29,550};
    sort(a,0,6);
   printArray(a,7);
   return 0;
}

