class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int row=matrix.size();
        int col=matrix[0].size();

        int lhs=0,rhs=col-1,top=0,low=row-1;

        while(top<= low && lhs<=rhs)
        {
            for(int i=lhs;i<=rhs;i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;

            for(int i=top;i<=low;i++)
            {
                ans.push_back(matrix[i][rhs]);
            }
            rhs--;

            if(top<=low)
            { 
               for(int i=rhs;i>=lhs;i--)
                {
                    ans.push_back(matrix[low][i]);
                }
                low--;
            }
            

            if(lhs<=rhs){
                for(int i=low;i>=top;i--)
                {
                    ans.push_back(matrix[i][lhs]);
                }
                lhs++;
            }
            
        }
        return ans;
    }
};