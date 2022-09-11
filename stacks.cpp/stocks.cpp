 /* the idea is that we store the indices of elements and if we get the arr[s.top]<=curr[i] then we pop it otherwise we will just
 subtract the curr indx to s.top() as 
 100 80 60 70-0 1 2 3
 1 (1-0) (2-1) (3-1) as we pop indx 2*/
 
 vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int>v;
       stack<int>s;
    //    s.push(0);
    //    v.push_back(1);
       for(int i=0;i<n;i++){
       int curr=price[i];
       while(!s.empty()&&price[s.top()]<=curr){
       s.pop();
           }
           if(!s.empty()){
               v.push_back(i-s.top());}
               else{
               v.push_back(i+1);}
           
           s.push(i);
       }
       return v;
    }