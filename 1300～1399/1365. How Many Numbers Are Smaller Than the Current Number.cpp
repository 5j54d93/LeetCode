class Solution {
    public:
        vector<int> smallerNumbersThanCurrent(vector<int>& nums)
        {
            vector<int> ans;
            vector<int> count(101,0);
            
            for(int i=0;i<nums.size();i++)
                count[nums[i]]++;
            
            for(int i=0;i<nums.size();i++)
            {
                int numSmaller=0;
                for(int j=0;j<nums[i];j++) numSmaller+=count[j];
                ans.push_back(numSmaller);
            }
            
            return ans;
        }
};
