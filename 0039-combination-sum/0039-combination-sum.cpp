class Solution {
public:

    void helper(vector<int>& candidates, int target, int idx,
                vector<int>& temp, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        if (target < 0 || idx == candidates.size()) {
            return;
        }
        if (candidates[idx] <= target) {

            temp.push_back(candidates[idx]);
            helper(candidates, target - candidates[idx],
                   idx, temp, ans);
            temp.pop_back();
        }
        helper(candidates, target, idx + 1,
               temp, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates,
                                        int target) {

        vector<vector<int>> ans;
        vector<int> temp;

        helper(candidates, target, 0, temp, ans);

        return ans;
    }
};

