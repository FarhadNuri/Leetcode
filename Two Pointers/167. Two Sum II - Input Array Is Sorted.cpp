class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        int a=0;
        int b=0;
        while(i<j) {
            if(nums[i]+nums[j]==target) {
                a=i;
                b=j;
                break;
            } else if(nums[i]+nums[j]>target) {
                j--;
            } else {
                i++;
            }
        }
        return {a+1,b+1};
    }
};