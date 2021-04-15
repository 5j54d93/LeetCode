class Solution {
    public:
        int romanToInt(string s)
        {
            map<char,int> Roman_numerals;
            
            Roman_numerals['I'] = 1;
            Roman_numerals['V'] = 5;
            Roman_numerals['X'] = 10;
            Roman_numerals['L'] = 50;
            Roman_numerals['C'] = 100;
            Roman_numerals['D'] = 500;
            Roman_numerals['M'] = 1000;
            
            int ans = 0;
            for(int i=0; i<s.length(); i++)
            {
                if(Roman_numerals[s[i]] >= Roman_numerals[s[i+1]])
                    ans += Roman_numerals[s[i]];
                else ans -= Roman_numerals[s[i]];
            }
            
            return ans;
        }
};
