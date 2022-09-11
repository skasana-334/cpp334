#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	 int arr[n];
	 for(int i=0;i<n;i++){
	     cin>>arr[i];
	 }
	 stack<int>s;
	 vector<int>v;
	 s.push(arr[0]);
	 v.push_back(-1);
	 for(int i=1;i<n;i++){
	     int c=arr[i];
	     while(!s.empty()&&s.top()<arr[i]){
	         s.pop();
	     }
	     if(!s.empty())
	     v.push_back(s.top());
	     else
	     v.push_back(-1);
	     s.push(arr[i]);
	 }
for(auto i:v)
cout<<i<<" ";

}