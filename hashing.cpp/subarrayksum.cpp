 //no. of subarrays have sum equals to k
 
 int subarraySum(vector<int>& nums, int k) {
        int pf=0,c=0;
    map<int,int>m;
        for(auto i:nums){
            pf+=i;
            if(pf==k)
                c++;
            if(m.find(pf-k)!=m.end())
                c+=m[pf-k];
            m[pf]++;
        }
        return c;
    }