class Solution {
    private: 
    bool isGood(string s)
    {
        if(s[0] == s[1] || s[0] == s[2] || s[1] == s[2])
            return false;
        
        else
            return true; 
    }
public:
    int countGoodSubstrings(string s) {
        
        int count = 0;
        int n = s.size();
        if(n<=2)
            return 0;
        
        for(int i = 0 ; i<n-2 ; i++)
        {
            string str = s.substr(i,3);
            //cout<<str<<endl;
            if(isGood(str))
            {
                count++;
            }
        }
        return count;
    }
};