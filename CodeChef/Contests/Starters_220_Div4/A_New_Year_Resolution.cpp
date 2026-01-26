/*
 * Problem: NYRES - New Year Resolution
 * Contest: Starters 220
 * Platform: CodeChef
 * Rating: 19
 * Logic: Multiply number of push ups/day with days in January(31).
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n;
    cin >> n;

    cout << 31*n << "\n";
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
