class Solution {
public:
    vector<int> sortedSquares(vector<int>& main) {
        vector<int>pos,neg;
        int len=main.size();
        for(int i=0;i<len;i++) {
            if(main[i]<0) neg.push_back(main[i]);
            else pos.push_back(main[i]);
        }
        if(pos.size()==0) {
            for(int i=0;i<neg.size();i++) {
                neg[i]=neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());
            return neg;
        } else {
            for(int i=0;i<neg.size();i++) {
                neg[i]=neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());
            for(int i=0;i<pos.size();i++) {
                pos[i]=pos[i]*pos[i];
            }
            vector<int>v3;
            int i=0;
            int j=0;
            while(i<neg.size() and j<pos.size()) {
                if(neg[i]<=pos[j]) {
                    v3.push_back(neg[i]);
                    i++;
                } else {
                    v3.push_back(pos[j]);
                    j++;
                }
            }
            while(j<pos.size()) {
                v3.push_back(pos[j]);
                j++;
            }
            while(i<neg.size()) {
                v3.push_back(neg[i]);
                i++;
            }
            return v3;
        }
    }
};
//https://leetcode.com/problems/squares-of-a-sorted-array/
// TC: O(n) SC: O(n)
// Two Pointers