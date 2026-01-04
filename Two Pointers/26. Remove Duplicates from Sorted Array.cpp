class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int i=0,j=1;
        int cnt=1;
        int n=v.size();
        while(j<n) {
            if(v[j]==v[i]) j++;
            else if(v[j]!=v[i]) {
                swap(v[j],v[i+1]);
                cnt++;
                i++;
                j++;
            }
        }
        return cnt;
    }
};
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// TC: O(n) SC: O(1)
// Two Pointers