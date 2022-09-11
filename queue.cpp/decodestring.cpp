class Solution {
public:
    string decodeString(string str) {
        stack<char>s;
       
        for(int i=0;i<str.size();i++){
         if(str[i]!=']')
           s.push(str[i]);
            else{
                string x;
                while(s.top()!='['){
            x+=s.top();
                    s.pop();
                }
                s.pop();
        string n;
              while(!s.empty()&&s.top()>='0'&&s.top()<='9'){
                n+=s.top();
                  s.pop();
             }//for 001 08
                reverse(n.begin(),n.end());
              int k=stoi(n);
                reverse(x.begin(),x.end());
              
                while(k--){
for(int i=0;i<x.size();i++){
s.push(x[i]);
}
                }
            }
        }
        string x;
        while(!s.empty()){
         x+=s.top();
            s.pop();
        }
        reverse(x.begin(),x.end());
        return x;
    }
};