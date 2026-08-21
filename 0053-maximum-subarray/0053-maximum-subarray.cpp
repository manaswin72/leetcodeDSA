class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      // Input 
int current_Max = nums[0];
int global_Max = nums[0];

for(int i =1 ; i < nums.size(); i++ ){
    current_Max = max(nums[i], current_Max + nums [i]);
    if(current_Max > global_Max){
        global_Max = current_Max;
    }
}

      //Kadanes's algorithm
      return global_Max;

        
    }
}; 