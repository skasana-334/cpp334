 vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int>v;
        deque<int>dq;
  
      for(int i=0;i<k;i++){
           while(!dq.empty()&&dq.back()<arr[i]){
           dq.pop_back();}
           dq.push_back(arr[i]);
      }
      v.push_back(dq.front());
        for(int i=k;i<n;i++){
     if(dq.front()==arr[i-k])
     dq.pop_front();// to remove the element of previous window
       while(!dq.empty()&&dq.back()<arr[i]){
           dq.pop_back();}
           dq.push_back(arr[i]);
           v.push_back(dq.front());
    }
        return v;
    }