class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0,j=height.size()-1,mini=0,ans=0,maxi=0;

        while(i<=j)
        {
            mini=min(height[i],height[j]);

            ans=mini*(j-i);
            maxi=max(maxi,ans);

            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            

        }
        return maxi;
    }
};