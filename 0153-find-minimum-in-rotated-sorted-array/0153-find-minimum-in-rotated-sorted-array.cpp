class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<low){
                low=nums[i];
            }
        }
        return low;
    }
};