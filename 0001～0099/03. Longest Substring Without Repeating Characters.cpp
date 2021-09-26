class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0, left=0, right=0;
        set<char> LongestSubstring;
        while(left<s.length() && right<s.length()) {
            if(LongestSubstring.find(s[right]) == LongestSubstring.end()) {
                LongestSubstring.insert(s[right]);
                right++;
                ans = max(ans, right-left);
            }
            else {
                LongestSubstring.erase(s[left]);
                left++;
            }
        }
        return ans;
    }
};
