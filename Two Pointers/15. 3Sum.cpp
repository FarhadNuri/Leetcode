class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        vector<vector<int>>v2;
        int n=v.size();
        sort(v.begin(),v.end());
        for(int i=0;i<n-2;i++) {
            if(i>0 and v[i]==v[i-1]) continue;

            int l=i+1,r=n-1,sum=-1*v[i];
            while(l<r) {
                int s=v[l]+v[r];
                if(s==sum) {
                    v2.push_back({v[i],v[l],v[r]});
                    l++;
                    r--;
                    while(l<n and v[l]==v[l-1]) l++;
                    while(r>=0 and v[r]==v[r+1]) r--;
                } else if(s<sum) l++;
                else r--;
            }
        }
        return v2;
    }
};
//https://leetcode.com/problems/3sum/
// TC: O(n^2) SC: O(1) ignoring the space required for output
// Two Pointers + Sorting