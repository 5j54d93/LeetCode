class Solution {
    public:
        vector<int> shuffle(vector<int>& nums, int n)
        {
            vector<int> ans(n*2,0);
            
            for(int i=0; i<n; i++)
                ans[i*2]=nums[i];
            
            int j=n;
            for(int i=1; i<n*2; i+=2)
            {
                ans[i]=nums[j];
                j++;
            }
            
            return ans;
        }
};
