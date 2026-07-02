class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       int count=0;
       int product=1;

       for(int i=0;i<nums.size();i++){
        product=1;
        for(int j=i;j>=0;j--){
            product*=nums[j];
            if(product<k){
                count++;
            }else{
                break;
            }
        }
       }
       return count; 
    }
};