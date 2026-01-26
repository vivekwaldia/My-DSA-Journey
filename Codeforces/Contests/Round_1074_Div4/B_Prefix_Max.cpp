/*
 * Problem: B - Prefix Max
 * Contest: Codeforces Round 1074 (Div. 4)
 * Platform: Codeforces
 * Rating: N/A
 * Tags: Greedy
 * Logic: 
 - To maximize the sum of prefix maximums with one swap, we want the largest 
 - element to appear as early as possible.
 - Swapping the global maximum with the first element (index 0) ensures that 
 - every prefix maximum from i=0 to n-1 is the global maximum.
 - The maximum sum is therefore (total elements * global maximum).
 * Time Complexity: O(N * log N)
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end(), greater<int>());

    long long ans = n*vec[0];

    cout << ans << "\n";
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
