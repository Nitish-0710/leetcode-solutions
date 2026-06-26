class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long int max = nums[0], smax = LONG_MIN, tmax = LONG_MIN; 
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] == max || nums[i] == smax || nums[i] == tmax) continue; 
            else if (nums[i] > max) {
                tmax = smax; 
                smax = max;
                max = nums[i];
            } else if (nums[i] < max && nums[i] > smax) {
                tmax = smax; 
                smax = nums[i]; 
            } else if (nums[i] < max && nums[i] < smax && nums[i] > tmax){
                tmax = nums[i]; 
            }
        }

        if(tmax == LONG_MIN) return max; 

        return tmax; 
    }
};

// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         set<int> st;
//         for (int i = 0; i < nums.size(); i++) {
//             st.insert(nums[i]);
//         }
//         if(st.size() >= 3){
//             auto it = next(st.begin(), st.size() - 3);
//             return *it;
//         } else {
//             auto it = next(st.begin(), st.size() - 1);
//             return *it;
//         }

//     }
// };