  /* idea is to check wheter we insert open brackets at to and when we find 
  closing compare with s.top if it is reverse then trye;}
  
  bool isValid(string s) {
        stack<char>v;
       for(int i=0;i<s.size();i++){
       if(s[i]=='{'||s[i]=='['||s[i]=='(')
           v.push(s[i]);
         else{
             if(v.size()!=0){
             if(s[i]=='}'){
      if(v.top()=='{'){
          v.pop();
             }
                 else {
                     return false;
                 }        
         }
           else  if(s[i]==']'){
              if(v.top()=='['){
          v.pop();
             }
                 else {
                     return false;
                 } }       
         else{
         if(v.top()=='('){
          v.pop();
             }
                 else {
                     return false;
                 }        
         }}
             else 
                 return false;}}
          if(v.empty())
              return true;
       return false;
    }