class Solution {
public:
    int threeSumClosest(vector<int>& v, int target) {
        int maxdiff=INT_MAX;
        int n=v.size();
        int res=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n-2;i++) {
            int l=i+1,r=n-1;

            while(l<r) {
                int s=v[i]+v[l]+v[r];
                int diff=abs(target-s);

                if(diff<maxdiff) {
                    maxdiff=diff;
                    res=s;
                }
                if(s==target) return s;
                else if(s<target) l++;
                else r--;
            }
        }
        return res;
    }
};
//https://leetcode.com/problems/3sum-closest/
// TC: O(n^2) SC: O(1) ignoring the space required for sorting
// Two Pointers + Sorting