class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res; 
        map<int, int> mpp; 
        for(int i = 0; i < nums.size(); i++){
            if(mpp.find(target - nums[i]) != mpp.end()) {
                res.push_back(i);
                res.push_back(mpp[target - nums[i]]);
            } else {
                mpp[nums[i]] = i; 
            }
        }
        return res; 
    }
};