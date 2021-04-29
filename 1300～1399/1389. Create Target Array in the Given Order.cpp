class Solution {
    public:
        vector<int> createTargetArray(vector<int>& nums, vector<int>& index)
        {
            vector<int> ans;
            vector<int>::iterator it;
            
            for(int i=0;i<nums.size();i++)
            {
                it=ans.begin();
                ans.insert(it+index[i],nums[i]);
            }
            
            return ans;
        }
};
