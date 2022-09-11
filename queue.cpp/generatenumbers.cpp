#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	long long n;
	cin>>n;
	queue<int>q;
	q.push(5);
	q.push(6);
	// we have digits only 5 and 6 we have to make n numbers from that
	for(int i=0;i<n;i++){
	    int x=q.front();
	    q.pop();
	    cout<<x<<' ';
	    q.push(q.front()*10+5);//for 55 555 65....
	    
	    q.push(q.back()*10+6);//for 66 56 666 ....
	
	}

}