#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
/* s1-first count the no of rows as it will run as outer loop
 s2-count no of colunms for inner loop
 s3-find the relationship between i and j
1)
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
*

    for(int i=1;i<=2*n-1;i++){
        int c;
        if(i<=n)
        c=i;
        else
        c=2*n-i;
        for(int j=1;j<=c;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }*/
/*
2)  * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
      for(int i=1;i<=2*n-1;i++){
        int c,s;
        if(i<=n){
        c=i;
        }
        else{
        c=2*n-i;
        }
        s=n-c;/*1st approach 
                2nd s=n-i  in if statement and i-n in else statement*/ /*
        for(int k=1;k<=s;k++){
            cout<<" ";
        }
        for(int j=1;j<=c;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
      }*/

/* 3)
     1 
   2 1 2 
  3 2 1 2 3 
 4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5 
      for(int i=1;i<=n;i++){
          int x=i,y=2;
          for(int k=1;k<=n-i;k++){
              cout<<"  ";
          }
          for(int j=1;j<=2*i-1;j++){
              if(j<=i){
              cout<<x<<" ";
              x--;}
              else{
                  cout<<y<<" ";
                  y++;
              }
              
          }
          cout<<endl;
      }*/
/* 4)  good concept
 4 4 4 4 4 4 4 
 4 3 3 3 3 3 4 
 4 3 2 2 2 3 4 
 4 3 2 1 2 3 4 
 4 3 2 2 2 3 4 
 4 3 3 3 3 3 4 
 4 4 4 4 4 4 4 
for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=2*n-1;j++){
        int x=min(min(j,2*n-j),min(i,2*n-i));
        cout<<n-x+1<<" ";
    }
    cout<<endl;*/
/* 5)
    *    
   * *   
  *   *  
 *     * 
*********
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i<n){
                if(j==n-i+1||j==n+i-1)
                cout<<"*";
                else
                cout<<" ";
            }
            else
            cout<<"*";
        }
        cout<<endl;
    }
*/
/*   6)
 *********
  *     * 
   *   *  
    * *   
     *  
for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i>1){
                if(j==i||j==2*n-i)
                cout<<"*";
                else
                cout<<" ";
            }
            else
            cout<<"*";
        }
        cout<<endl;
    }
*/

/*  7)    good question
      **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********
for(int i=1;i<=2*n;i++){
    for(int j=1;j<=2*n;j++){
    
            if(j<=n-i+1||j>=i+n)
            cout<<"*";
           else if(j<=i-n||j>2*n-i+n)
            cout<<"*";
            else
            cout<<" ";
        }
    
    cout<<endl;
}*/
/* 8)
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=2*n;j++){
        if(i<=n){
            if(j<=i||j>2*n-i)
            cout<<"*";
            else
            cout<<" ";
        }
        else{
            if(j<=2*n-i||j>i)
            cout<<"*";
            else
            cout<<" ";
        }
    }
    cout<<endl;
}*/
/* 9)
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

int x=1;
for(int i=1;i<=n;i++){
          
          for(int k=1;k<=i;k++){
              cout<<x<<" ";
              x++;
          }
          cout<<endl;}*/

/*
1          1
12        21
123      321
1234    4321
12345  54321
123456654321
          for(int i=1;i<=n;i++){
              int x=1,y=i;
for(int j=1;j<=2*n;j++){
    if(j<=i){
    cout<<x;
    x++;}
    else if(j>2*n-i){
    cout<<y;
    y--;}
    else{
        cout<<" ";
    }
}
cout<<endl;
          }*/
          

/* 10)
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1

obs- power of 11
for(int i=0;i<n;i++){
int x=pow(11,i);
for(int j=1;j<=n-i-1;j++){
    cout<<" ";}
while(x>0){
    cout<<(x%10)<<" ";
    x=x/10;
}
cout<<endl;

}*/

/******************************************************/
/* 
1)  
E 
D E 
C D E 
B C D E 
A B C D E 

for(int i=1;i<=n;i++){
    int x=n-i;
    for(int j=1;j<=i;j++){
        char c='A'+x;
cout<<c<<" ";
x++;
    }
    cout<<endl;
}*/

/*
F E D C B A 
E D C B A 
D C B A 
C B A 
B A 
A 
for(int i=1;i<=n;i++){
    int x=n-i;
    for(int j=1;j<=n-i+1;j++){
        char c='A'+x;
cout<<c<<" ";
x--;
    }
    cout<<endl;
}*/

    return 0;
}