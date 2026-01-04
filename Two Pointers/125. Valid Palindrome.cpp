class Solution {
public:
    bool isPalindrome(string str) {
        int n=str.size();
        int i=0;
        int j=n-1;
        while(i<j) {
            while(i<j and !isalnum(str[i])) {
                i++;
            }
            while(i<j and !isalnum(str[j])) {
                j--;
            }
            if((tolower(str[i]))!=(tolower(str[j]))) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
//https://leetcode.com/problems/valid-palindrome/
// TC: O(n) SC: O(1)
// Two Pointers