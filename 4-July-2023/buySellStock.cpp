class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int a=prices[0],b=0;

        for(int i=0;i<prices.size();i++)
        {
            b=max(b,prices[i]-a);

            a=min(a,prices[i]);

        }

        return b;
    }
};