// brute fore 
//i left 
// j right    width j -i   height =  min hgt i * heght j 
// area = w *ht 
// ans   maxWater = 0
// Fixed Brute-Force (Compiles, but not optimal)
/* class Solution {
public:
    int maxArea(vector<int>& height){
        int maxWater = 0;
        for(int i = 0; i < height.size(); i++){
            for(int j = i + 1; j < height.size(); j++) {
                int w = j - i;
                int ht = min(height[i], height[j]);
                int currWater = w * ht;
                maxWater = max(maxWater, currWater);
            }
        }
        return maxWater;
    }
}; */
 
 // 2 pointr left = 0 rp= n-1 
 //container = w * ht 
 /*r-l   min ht[l],ht[r]
 lp  ++ rp--
 ht[lp]<ht[rp] lp++ or rp -- */ 
class Solution{
    public:
    int maxWater=0;
    int maxArea(vector<int>&height){
        int lp =0 , rp=height.size()-1;

        while(lp<rp){
            int w = rp-lp;
            int ht =min(height[lp], height[rp]);
            int currWater = w*ht;
            maxWater = max(maxWater, currWater);

            height[lp] < height[rp] ? lp++ : rp--;
            
        }
        return maxWater;
    }
};

