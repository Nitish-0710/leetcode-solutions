class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st; 
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]); 
        }
        if(st.size() >= 3){
            auto it = next(st.begin(), st.size() - 3);
            return *it; 
        } else {
            auto it = next(st.begin(), st.size() - 1); 
            return *it; 
        }

    }
};