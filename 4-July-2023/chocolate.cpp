class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    
    
    sort(a.begin(),a.end());
    
    long long mini=a[m-1];
    
    for(long long i=0;i+m-1<n;i++)
    {
        mini=min(a[i+m-1]-a[i],mini);
    }
    
    return mini;
    
    
    
    
    }   
};