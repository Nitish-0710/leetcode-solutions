class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp; 
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++; 
        }

        for(auto it : mpp){
            if(it.second > nums.size() / 2) return it.first; 
        }

        return -1;
    }
};
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int count = 0; 
//         for(int i = 0; i < nums.size(); i++){
//             count = 0; 
//             for(int j = 0; j < nums.size(); j++){
//                 if(nums[i] == nums[j]) count++; 
//             }

//             if(count > nums.size() / 2) return nums[i]; 
//         }

//         return -1; 
//     }
// };