class Solution {
    public:
        int maximumWealth(vector<vector<int>>& accounts)
        {
            int temp=0, Max=0;
            for(int i=0; i<accounts.size(); i++)
            {
                temp = 0;
                for(int j=0; j<accounts[i].size(); j++)
                    temp += accounts[i][j];
                if(temp>Max) Max=temp;
            }
            return Max;
        }
};
