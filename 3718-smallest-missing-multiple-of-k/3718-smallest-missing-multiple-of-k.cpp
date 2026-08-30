class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int x:nums) mp[x]++;
        int start=k;
        while(true){
            if(!mp.count(start)) return start;
            start+=k;
        }
        return -1;
    }
};