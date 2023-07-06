class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0,a=0;
        map<int,int> m1;

        m1[0]=1;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int b=sum-k;

            a+=m1[b];
            m1[sum]+=1;
        }
        return a;
    }
};