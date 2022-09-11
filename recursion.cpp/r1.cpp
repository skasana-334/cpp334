/*#include <bits/stdc++.h>
using namespace std;
string skip(string s,char c){
    if(s.empty()){
       
        return "";
    }
    if(s[0]==c)
    return skip(s.substr(1,s.size()),c);*//* we simply can use s.substr(1) it means string from 1stv idx to end*/
    return s[0]+skip(s.substr(1,s.size()),c);/*

}
int main(){
    string s="anjjakj";
 char c='a';
   cout<<skip(s,c);
   
return 0;}*/
/* subset
#include <iostream>
using namespace std;
void sub(string s,string x){
    if(x.empty()){
        cout<<s<<endl;;
        return;
    }
    sub(s+x[0],x.substr(1));
    sub(s,x.substr(1));
}

int main() {
sub("","abc");
	return 0;
}*/
/* with ascii values
#include <iostream>
using namespace std;
void sub(string s,string x){
    if(x.empty()){
        cout<<s<<endl;;
        return;
    }
    sub(s+x[0],x.substr(1));
    sub(s,x.substr(1));
    sub(s+to_string(int(x[0])),x.substr(1));
}

int main() {
sub("","abc");
	return 0;}*/


    /* permutations
    void per(string o,string s){
    if(s.empty()){
        cout<<o<<endl;;
        return;
    }
    for(int i=0;i<=o.size();i++){
        string p=o.substr(0,i);
        string t=o.substr(i,o.size());
       per(s[0]+p+t,s.substr(1)); 
    }

}
*/

/* for count
int per(string o,string s){
    if(s.empty()){
        return 1;
    } 
int c=0;
    for(int i=0;i<=o.size();i++){
        string p=o.substr(0,i);
        string t=o.substr(i,o.size());
       c+=per(s[0]+p+t,s.substr(1)); 
    }
    return c;
 

}*/