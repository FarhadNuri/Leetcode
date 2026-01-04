class Solution {
public:
    int lengthOfLongestSubstring(string a) {
        unordered_map<int,int> f;
        int low=0,high=0;
        int n=a.size();
        int res=INT_MIN;
        for(high=0;high<n;high++) {
            f[a[high]]++;
            int len=high-low+1;   
            while(f.size()<len) {
                f[a[low]]--;
                if(f[a[low]] ==0)
                    f.erase(a[low]);
                low++;
                len=high-low+1;
            }
            res=max(res,len);
        }
        if(res==INT_MIN) return 0;
        return res;
    }
};
//https://leetcode.com/problems/longest-substring-without-repeating-characters/
// TC: O(n) SC: O(min(m,n)) m is the size of charset
// Sliding Window + Hashing
