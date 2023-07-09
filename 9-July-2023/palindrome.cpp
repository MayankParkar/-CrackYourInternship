class Solution {
public:

    bool validPalindrome(string s) {

        int i=0,j=s.size()-1,a=0,b=0;

        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                i++;
                a++;
            }
        }
        i=0;
        j=s.size()-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                j--;
                b++;
            }

        }
        if(a==1 || b==1)
            return true;
        if(a==0 || b==0)
            return true;


        return false;
    }
};