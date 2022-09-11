//  vector<long long> nextLargerElement(vector<long long> arr, int n){
//          Your code here
//For each iteration,

// While element at top of stack is less than or equal to current array element, pop elements from the stack.
// If stack becomes empty, store -1 in the answer list else store the top element of the stack.  
// Push the current array element into the stack.
//         vector<long long>v;
//         stack<long long>s;
//         s.push(-1);
//         for(int i=n-1;i>=0;i--){
//             while(!s.empty()&&s.top()<=arr[i]){
//                  s.pop();
//              }
//              if(s.empty())
//              v.push_back(-1);
//              else
//              v.push_back(s.top());
//               s.push(arr[i]);}
//            reverse(v.begin(),v.end());
        
//         return v;
//     }

/******************************for circular array*****/
    // int n=nums.size(),x=-1,c=0;
    //          vector<int>v(n);
    //     stack<long long>s;
     
    //     for(int i=2*n-1;i>=0;i--){
    //         long long c=nums[i%(n)];
    //         while(!s.empty()&&s.top()<=c){
    //             s.pop();
    //         }
    //         if(!s.empty())
    //             v[i%n]=(s.top());
    //             else{
    //             v[i%n]=-1;}
    //             s.push(nums[i%(n)]);
           
    //     }

      

    //     return v;