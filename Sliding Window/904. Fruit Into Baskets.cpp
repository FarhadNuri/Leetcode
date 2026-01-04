class Solution {
public:
    int totalFruit(vector<int>& a) {
        unordered_map<int,int> f;
        int low=0,high=0;
        int n=a.size();
        int res=INT_MIN;
        for(high=0;high<n;high++) {
            f[a[high]]++;
            while(f.size()>2) {
                f[a[low]]--;
                if(f[a[low]] ==0)
                    f.erase(a[low]);
               low++;
           }
            int len=high-low+1;
            res=max(res,len);
       }
       return res;
   }

};
//https://leetcode.com/problems/fruit-into-baskets/description/
// TC: O(n) SC: O(1) since at most we will have 3 types of fruits in the map
// Sliding Window + Hashing
// Similar to Longest Substring with K Distinct Characters
