class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2,0);
        int n=grid.size();
        unordered_map<int,int> val;
        
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
            val[grid[i][j]]++;
         } 
        }

        for(int va = 1; va <= n * n; va++){
            if(val[va]==2){
                ans[0]=va;
            }else if(val[va]==0){
                ans[1]=va;
            }
        }

        return ans;
    }
};