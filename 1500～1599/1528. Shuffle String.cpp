class Solution {
    public:
        string restoreString(string s, vector<int>& indices) {
            string ans;
            char t[100];
            for(int i=0;i<s.length();i++)
                t[indices[i]]=s[i];
            for(int i=0;i<s.length();i++)
                ans.push_back(t[i]);
            return ans;
        }
};
