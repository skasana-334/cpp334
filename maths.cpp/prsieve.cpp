#include <bits/stdc++.h>
using namespace std;
void sieve(int n,bool arr[]){
        for(int i=2;i*i<=n;i++){
            if(!arr[i]){
                for(int j=i*2;j<=n;j+=i){
              arr[j]=1;
                }
            }}
            for(int i=2;i<=n;i++){
                if(!arr[i])
                cout<<i<<" ";
            }

        
}
int main(){
    int n=103;
    bool arr[n];
    sieve(n,arr);
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
      int n;
      cin>>n;
      
      for(int i=1;i*i<=n;i++){
          if(n%i==0){
              cout<<i<<" "<<(n/i)<<" ";
          }
if we want in sorted order we can make an array and store n/i in it instead of using sort function
      }
	return 0;
}*/