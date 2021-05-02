class Solution
{
    public:
        int maxDepth(string s)
        {
            int nestingDepth = 0, ans = 0;
            
            for(int i=0; i<s.length(); i++)
            {
                if(s[i]=='(') nestingDepth++;
                else if(s[i]==')') nestingDepth--;
                
                if(nestingDepth>ans) ans = nestingDepth;
            }
            
            return ans;
        }
};
