class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int n = a.length() - 1, m = b.length() - 1;
        int carry = 0;
        while (n >= 0 || m >= 0 || carry == 1) {
            int digit1 = 0, digit2 = 0;
            if (n >= 0)
                digit1 = a[n--] - '0';
            if (m >= 0)
                digit2 = b[m--] - '0';
            int sum = digit1 + digit2 + carry;
            ans += (sum % 2) + '0';
            carry = sum / 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};