class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0, total = 0, rightSum = 0;
        for(int x : nums){
            total += x; 
        } 

        for(int i = 0; i < nums.size(); i++){
            rightSum = total - leftSum - nums[i]; 
            if(leftSum == rightSum){
                return i; 
            }
            leftSum += nums[i]; 
        }

        return -1; 
    }
};