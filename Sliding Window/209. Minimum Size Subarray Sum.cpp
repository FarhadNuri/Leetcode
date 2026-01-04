class Solution {
public:
    int minSubArrayLen(int target, vector<int>& v) {
        int low=0,high=0,res=INT_MAX,sum=0;
        int n=v.size();
        for(high=0;high<n;high++)  {
            sum+=v[high];
            while(sum>=target) {
                int len=high-low+1;
                res=min(res,len);
                sum-=v[low];
                low++;
            }
        }
        if(res==INT_MAX) return 0;
        else return res;
    }
};
//https://leetcode.com/problems/minimum-size-subarray-sum/description/
// TC: O(n) SC: O(1)
// Sliding Window