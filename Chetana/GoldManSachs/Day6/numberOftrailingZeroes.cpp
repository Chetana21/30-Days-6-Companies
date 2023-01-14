class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0;
        for(long long int i=1;;i*=5)
        {
            sum+=n/(5*i);
           if(n/(5*i)<=0) break;

        }
        return sum;
    }
};
