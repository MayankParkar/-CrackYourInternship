class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total=0,maxi=0,n=cardPoints.size();

        for(int i=0;i<k;i++)
        {
            total+=cardPoints[i];
        }
        maxi=total;

        for(int i=k-1;i>=0;i--)
        {
            total-=cardPoints[i];
            total+=cardPoints[n-k+i];

            maxi=max(total,maxi);
        }

        return maxi;

    }
};