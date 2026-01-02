
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define nl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define ppb pop_back
#define forl for(ll i=0;i<n;i++)
#define forlj for(ll j=0;j<m;j++)
#define vn vector<ll>v(n)
#define vin forl cin>>v[i];

int main() {
optimize();
ll n,k;cin>>n>>k;
vn;vin;
ll sum=0,low=0,high=k-1;
for (int i=low;i<=high;i++) {
    sum+=v[i];
}
ll temp=sum;
while(high<n) {
    temp=max(sum,temp);
    low++;
    high++;
    sum-=v[low-1];
    if(high==n) break;
    sum+=v[high];
}
cout << temp << nl;
}

ll sum = 0;
// 1. Calculate the initial window of size k
for(int i = 0; i < k; i++) {
    sum += v[i];
}

ll max_sum = sum; // Keep track of the best sum found
ll current_window_sum = sum;

// 2. Slide the window from index k to n-1
for(int i = k; i < n; i++) {
    current_window_sum += v[i];     // Add the new element (right side)
    current_window_sum -= v[i - k]; // Remove the oldest element (left side)
    
    max_sum = max(max_sum, current_window_sum);
}

cout << max_sum << nl;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0,sum=0,mini=INT_MAX;
        while(high<nums.size()) {
            sum+=nums[high];
            while(sum>=target) {
                int len = high-low+1;
                mini=min(mini,len);
                sum-=nums[low];
                low++;
            }
            high++;
        }
        if (mini==INT_MAX) return 0;
        return mini;
    }
};
