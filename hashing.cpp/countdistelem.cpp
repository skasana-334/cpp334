  vector <int> countDistinct (int a[], int n, int k)
    {
        //code here.
      
           map<int,int> m;
       for(int i=0;i<k;i++)
           m[a[i]]++;
       vector<int> v;
       v.push_back(m.size());
       
       
      for(int i=k;i<n;i++)
       {
           m[a[i-k]]--;
           m[a[i]]++;
           if(m[a[i-k]] == 0)
               m.erase(a[i-k]);
           v.push_back(m.size());
           
       }
       return v;
    }
};