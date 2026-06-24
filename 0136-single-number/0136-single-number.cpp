class Solution {
public:
    // int singleNumber(vector<int>& nums) {
    //     int count = 0, num = -1; 
    //     for(int i = 0; i < nums.size(); i++){
    //         count = 0; 
    //         for(int j = 0; j < nums.size(); j++){
    //             if(nums[i] == nums[j]) count++; 
    //         }
    //         if(count == 1) num = nums[i]; 
    //     }

    //     return num; 
    // }

    // int singleNumber(vector<int>& nums) {
    //     map<long long, int> mp; 

    //     for(int i = 0; i < nums.size(); i++){
    //         mp[nums[i]]++;
    //     }

    //     for(auto it: mp){
    //         if(it.second == 1){
    //             return it.first; 
    //         }
    //     }

    //     return -1; 
    // }

    int singleNumber(vector<int>& nums){
        int xor1 = nums[0];
        for(int i = 1; i < nums.size(); i++){
            xor1 ^= nums[i]; 
        } 
        return xor1; 
    }
};