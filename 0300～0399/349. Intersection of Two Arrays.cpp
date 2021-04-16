class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
        {
            vector<int> ans;
            map<int,bool> m;
            map<int,bool>::iterator it;
            
            for(int i=0; i<nums1.size(); i++)
                if(m.find(nums1[i])==m.end())
                    m[nums1[i]]=false;
            
            for(int i=0; i<nums2.size(); i++)
                if(m.find(nums2[i])!=m.end())
                    m[nums2[i]]=true;
            
            for(it=m.begin(); it!=m.end(); it++)
                if(it->second == true)
                    ans.push_back(it->first);
            
            return ans;
        }
};
