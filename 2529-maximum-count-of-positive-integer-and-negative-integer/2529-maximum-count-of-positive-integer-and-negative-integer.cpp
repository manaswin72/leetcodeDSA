class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int Negcount = 0;
        int Poscount = 0;
        for(auto d : nums){
           if(d > 0) Poscount++;
           else if(d<0) Negcount++;
        }
        return max(Negcount, Poscount);

        
    }
};