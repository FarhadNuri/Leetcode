class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>f(256,0);
        int low=0,high=0,res=INT_MIN;
        int n=s.size();
        for(high=0;high<n;high++) {
            f[s[high]]++;
            int len = high-low+1;
            int cnt=*max_element(f.begin(),f.end());
            int diff=len-cnt;
            while(diff>k) {
                f[s[low]]--;
                low++;
                cnt=*max_element(f.begin(),f.end());
                len=high-low+1;
                diff=len-cnt;
            }
            len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};
//https://leetcode.com/problems/longest-repeating-character-replacement/
// TC: O(26*n) SC: O(1)
// Sliding Window
