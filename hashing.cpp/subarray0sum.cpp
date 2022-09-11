//here we have to find subarray exist whose sum is k or not

bool subArrayExists(int arr[], int n)
    {
        //Your code here
    unordered_set<int> pf;
    int sum=0;
    for(int i=0;i<n;i++){
        
        sum+=arr[i];
        if(sum==k||pf.find(sum-k)!=pf.end()){
            return true;}
            pf.insert(sum);
        
    }
    return false;
            
        }

