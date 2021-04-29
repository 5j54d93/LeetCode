class Solution {
    public:
        int subtractProductAndSum(int n) {
            int product=1, sum=0, temp=n;
            while(temp)
            {
                product*=temp%10;
                sum+=temp%10;
                temp/=10;
            }
            return product-sum;
        }
};
