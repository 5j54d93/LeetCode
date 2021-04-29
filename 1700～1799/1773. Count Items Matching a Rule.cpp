class Solution {
    public:
        int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue)
        {
            int ans=0,checkValue;
            
            if(ruleKey=="type") checkValue=0;
            else if(ruleKey=="color") checkValue=1;
                 else checkValue=2;
            
            for(int i=0;i<items.size();i++)
                if(items[i][checkValue]==ruleValue)
                    ans++;
            
            return ans;
        }
};
