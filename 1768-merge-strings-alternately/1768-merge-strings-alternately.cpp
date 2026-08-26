class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int n1 = word1.size(), n2 = word2.size();
        int n = min(n1, n2);

        for (int i = 0; i < n; i++) {
            result.push_back(word1[i]);
            result.push_back(word2[i]);
        }

        if (n1 > n) result += word1.substr(n);
        if (n2 > n) result += word2.substr(n);

        return result;
    }
};