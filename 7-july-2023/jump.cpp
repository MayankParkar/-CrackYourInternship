class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int size=nums.size();
        int ans=0;

        for(int i=0;i<size;i++)
        {
            if(ans<i)
            {
                return false;
            }
            ans=max(ans,i+nums[i]);
        }
        return true;
    }
};