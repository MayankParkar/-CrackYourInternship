/*MY INITIAL SOLUTION*/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        stack<int> stk;
        int cnt=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                stk.push(nums[i]);
            else
                cnt++;
        }
        for(int i=0;i<cnt;i++)
        {
            stk.push(0);
        }

        int a=0;
        while(!stk.empty())
        {
            nums[a]=stk.top();
            stk.pop();
            a++;
        }
        reverse(nums.begin(), nums.end());

    }
};

//*************************************************************
/*OPTIMIZED CODE*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

         int n= nums.size();
        int start=0, end=n-1,mid=0;
        while(mid<=end){
            if(nums[mid]!=0){
                swap(nums[start],nums[mid]);                  
                    start++;
            }
            mid++;
        }
    }
};