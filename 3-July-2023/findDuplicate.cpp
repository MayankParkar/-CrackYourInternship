/*MY INITIAL SOLUTION*/

 int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m1;

        for(int i=0;i<nums.size();i++)
        {
            m1[nums[i]]++;
        }
        unordered_map<int, int>:: iterator p;

        for (p = m1.begin();p != m1.end(); p++)
        {
            if(p->second>1)
            {
                return p->first;
            }
        }

        return 0;
    }

// **************************************************

/*OPTIMIZED CODE*/

 int findDuplicate(vector<int>& nums) {
        
        int size = nums.size();

        sort(nums.begin(), nums.end());
  
        for (int i = 0; i < size - 1; i++) 
        {
            if (nums[i] == nums[i + 1]) 
            {
                return nums[i];
            }
        }
    return 0;
    }