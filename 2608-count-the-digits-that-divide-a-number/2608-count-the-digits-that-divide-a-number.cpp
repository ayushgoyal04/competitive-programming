class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int N = num;
        while (N > 0) {
            int d = N % 10;
            if (d != 0 && num % d == 0) {
                count++;
            }
            N = N / 10;
        }
        return count;
    }
};