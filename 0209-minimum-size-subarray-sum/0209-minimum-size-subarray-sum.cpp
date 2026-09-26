class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int mini=INT_MAX;
        int n=nums.size();
        int left=0;
        for(int right=0;right<n;right++){
            sum=sum+nums[right];
            while(sum>=target){
                mini=min(mini,right-left+1);
                sum=sum-nums[left];
                left++;
            }
        }
        if(mini==INT_MAX){
            return 0;
        }
        return mini;
    }
};