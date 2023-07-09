class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int a=0,b=0,cnt=0;

        while(a<haystack.size() && b<needle.size())
        {
            if(haystack[a]==needle[b])
            {
                if(a-cnt+1==needle.size())
                {
                    return cnt;
                }
                a++;
                b++;
            }
            else
            {
                b=0;
                cnt++;
                a=cnt;
            }
        }
        return -1;
    }
};