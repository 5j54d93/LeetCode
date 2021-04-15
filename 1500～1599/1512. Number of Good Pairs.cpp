class Solution {
    public:
        int numIdenticalPairs(vector<int>& nums)
        {
            int ans=0;
            map<int,int> m;
            map<int,int>::iterator it;
            
            for(int i=0; i<nums.size(); i++)
                if(m.find(nums[i])==m.end())
                    m[nums[i]]=1;
                else m[nums[i]]++;
            
            for(it=m.begin(); it!=m.end(); it++)
                ans += (it->second)*(it->second-1)/2;
            
            return ans;
        }
};
