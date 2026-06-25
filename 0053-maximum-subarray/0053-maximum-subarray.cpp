class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int runningSum = 0, bestSum = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            runningSum = max(runningSum + nums[i], nums[i]);
            bestSum = max(bestSum, runningSum);
        }

        return bestSum;
    }
};
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int runningSum = 0, bestSum = nums[0];
//         for (int i = 0; i < nums.size(); i++) {
//             runningSum = 0;
//             for (int j = i; j < nums.size(); j++) {
//                 runningSum += nums[j];
//                 bestSum = max(bestSum, runningSum);
//             }
//         }

//         return bestSum;
//     }
// };