class Solution {
    public:
        int xorOperation(int n, int start)
        {
            int ans=start;
            
            start+=2;
            for(int i=0;i<n-1;i++)
            {
                ans^=start;
                start+=2;
            }
            
            return ans;
        }
};
