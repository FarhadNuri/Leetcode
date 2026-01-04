class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int n=v.size();
        
        vector<pair<int,int>> vp;
        for(int i=0; i<n; i++){
            vp.push_back({v[i], i});
        }
        sort(v.begin(),v.end());
        sort(vp.begin(),vp.end());
        int i=0;
        int j=n-1;
        while(i<j) {
            if(v[i]+v[j]==target) {
                return {vp[i].second,vp[j].second};
            }
            else if(v[i]+v[j]>target) {
                j--;
            }
            else {
                i++;
            }
        }
        return {};
    }
};
//https://leetcode.com/problems/two-sum/description/
// TC: O(nlogn) SC: O(n)
// Two Pointers + Sorting
