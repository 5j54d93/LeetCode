class Solution {
    public:
        int balancedStringSplit(string s)
        {
            int ans=0,check=0;
            
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='L') check--;
                else check++;
                
                if(check==0) ans++;
            }
            
            return ans;
        }
};
