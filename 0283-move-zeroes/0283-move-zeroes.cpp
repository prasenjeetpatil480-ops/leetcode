class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int n = nums.size();
        int j = 0;  // points to place next non-zero element

        // Move all non-zero elements to the front
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};