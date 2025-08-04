class Solution {
public:
    double myPow(double x, int n) {
        // O(N) approach= BRUTE
        // if n is positive we can just do a for loop with ans = ans * ans (resiprocal for negative)
        // x^-n = 1/x^n 
        // edge case- the size of integer

        // optimal - 2^10 = (2*2)^5 = 4^5- this decrease our operations
        // 4^5 = 16^2
        // 16^2 = 256

        // time com = log2(n)
        double ans = 1.0;
        long long nn = n;
        if(nn<0) nn = -1 * nn;
        while(nn){
            if(nn%2) {
                ans = ans * x;
                nn = nn -1;
            }
            else{
                x = x * x;
                nn = nn / 2;
            }
        }
        if(n<0) ans = (double)(1.0) / (double)(ans);
        return ans;
    }
};