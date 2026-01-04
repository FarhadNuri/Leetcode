class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int low=0,high=0,res=INT_MIN;
        unordered_map<char,int>m;
        int n=s.size();
        for(high=0;high<n;high++) {
            m[s[high]]++;
            while(m.size()>k) {
                m[s[low]]--;
                if(m[s[low]]==0) 
                    m.erase(s[low]);
                low++;
            }
            if(m.size()==k) {
                res=max(res,high-low+1);
            }
        }
        if(res==INT_MIN) return -1;
        else return res;
        
    }
};
//https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
// TC: O(n) SC: O(k)
// Sliding Window + Hashing