 int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
    
        unordered_map<int,int>m;
        int c=0,pf=0;
      
        for(int i=0;i<N;i++){
            pf+=A[i];
            if(pf==K)
            c=i+1;
                if(m.find(pf-K)!=m.end())
                c=max(c,i-m[pf-K]);
                 if(m.find(pf)==m.end())
          m[pf]=i;
              
        }
       return c;
    }
    /// second -equal no. of 0's and 1's
      int f=0, ans=0;
        //  store mp[0]=-1 -> so that u can get rid of (sum==0) case
        unordered_map<int,int>mp;
        
        mp[0] = -1;
        
        for(int i=0; i<a.size(); i++){
            
            f += a[i]==1 ? 1 : -1;
       
            if(mp.find(f) == mp.end())
              mp[ f ] = i;
            else
              ans = max(ans, i - mp[f] );
            
           
               
        }
        
        return ans;

///third
        // span with same sum in two arrays 
        int longestCommonSum(bool arr1[], bool arr2[], int n)
{
    // Find difference between the two
    int arr[n];
    for (int i=0; i<n; i++)
      arr[i] = arr1[i] - arr2[i];
     
    // Creates an empty hashMap hM
    unordered_map<int, int> hM;
 
    int sum = 0;     // Initialize sum of elements
    int max_len = 0; // Initialize result
 
    // Traverse through the given array
    for (int i = 0; i < n; i++)
    {
        // Add current element to sum
        sum += arr[i];
 
        // To handle sum=0 at last index
        if (sum == 0)
            max_len = i + 1;
 
        // If this sum is seen before,
        // then update max_len if required
        if (hM.find(sum) != hM.end())
          max_len = max(max_len, i - hM[sum]);
           
        else // Else put this sum in hash table
            hM[sum] = i;
    }
 
    return max_len;
}
 
// Driver program to test above function
int main()
{
    bool  arr1[] = {0, 1, 0, 1, 1, 1, 1};
    bool  arr2[] = {1, 1, 1, 1, 1, 0, 1};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout << longestCommonSum(arr1, arr2, n);
    return 0;
}
