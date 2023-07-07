class Solution {

    bool found(int i,int a,int n,int m,vector<vector<char>>& board, string word,int j)
    {
        if(j==word.size())
            return true;

        if(i<0 || a<0 || i==n || a==m || board[i][a]!=word[j])
            return false;

            char meh= board[i][a];
            board[i][a]='0';

            bool w1 = found(i+1,a,n,m,board,word,j+1);
            bool w2 = found(i,a+1,n,m,board,word,j+1);
            bool w3 = found(i-1,a,n,m,board,word,j+1);
            bool w4 = found(i,a-1,n,m,board,word,j+1);

            board[i][a]=meh;

            return w1 || w2 || w3 || w4;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int a=0;a<m;a++)
            {
                if(board[i][a]==word[0])
                {
                    if(found(i,a,n,m,board,word,0))
                        return true;

                }
            }
        }
        return false;
    }
};