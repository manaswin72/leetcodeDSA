class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int sum = 0;
        while (n > 0) {
            int rem = n % 10;
            if (num % rem == 0) {
                sum++;
            }
            n /= 10;
        }
        return sum;
    }
};