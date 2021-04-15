class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
        {
            int Max=0;
            for(int i=0; i<candies.size(); i++)
                if(candies[i]>Max)
                    Max=candies[i];
            
            vector<bool> ans;
            for(int i=0; i<candies.size(); i++)
                if(candies[i]+extraCandies>=Max) ans.push_back(true);
                else ans.push_back(false);
            
            return ans;
        }
};
