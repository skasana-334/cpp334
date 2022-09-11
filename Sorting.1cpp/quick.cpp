#include <iostream>
using namespace std;
void qsort(int arr[],int l,int h){
    if(l>=h)
    return;
    int s=l,e=h,p=s+(e-s)/2;
    while(s<=e){
        while(arr[s]<arr[p])
        s++;
        while(arr[e]>arr[p])
        e--;
        if(s<=e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
  qsort(arr,l,e);
  qsort(arr,s,h);
}
int main() {
	int arr[]={1,5,9,78,10,12,8};
	qsort(arr,0,6);
	for(int i=0;i<7;i++)
	cout<<arr[i]<<" ";
	return 0;
}