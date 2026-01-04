class Solution {
  public:
    int maxSubarraySum(vector<int>& v, int k) {
        int sum=0,n=v.size();
        int low=0,high=k-1;
        for(int i=0;i<=high;i++) {
            sum+=v[i];
        }
        int temp=sum;
        for(int i=k;i<n;i++) {
            temp+=v[i];
            temp-=v[i-k];
            sum=max(temp,sum);
        }
        return sum;
        
    }
};
//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
// TC: O(n) SC: O(1)
// Sliding Window Fixed Size