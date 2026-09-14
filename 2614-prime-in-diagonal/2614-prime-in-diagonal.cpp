class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2 || n == 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& v) {
        int n = v.size(), ans = 0;
        for (int i = 0; i < n; ++i) {
            int d1 = v[i][i];
            int d2 = v[i][n - 1 - i];
            if (isPrime(d1)) ans = max(ans, d1);
            if (isPrime(d2)) ans = max(ans, d2);
        }
        return ans;
    }
};