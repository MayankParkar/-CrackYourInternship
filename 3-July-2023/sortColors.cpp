/*MY INITIAL CODE*/

class Solution {

    vector<int> sorted(vector<int>& nums)
    {
        int cnt=0;

        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                swap(nums[i],nums[i+1]);
                cnt++;
            }
        }
        if(cnt==0)
        {
            return nums;
        }
        sorted(nums);

        return nums;

    }
public:
    void sortColors(vector<int>& nums) {

        vector<int> s1;

        s1=sorted(nums);

        for(int i=0;i<s1.size();i++)
        {
            cout<<s1[i];
        }
    }
};

// **************************************************

/*OPTIMIZED CODE*/

class Solution {
public:
    void sortColors(vector<int>& nums) 
    {

       int low = 0, mid = 0, high = nums.size()-1;

        while(mid <= high)
        {

            if(nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};