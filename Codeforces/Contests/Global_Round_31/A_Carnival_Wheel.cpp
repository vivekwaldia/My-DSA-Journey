/*
 * Problem: A. Carnival Wheel
 * Contest: Codeforces Global Round 31 (Div. 1 + Div. 2)
 * Platform: Codeforces
 * Rating: 800
 * Tags: Brute Force, Number Theory
 * Logic: Calculate the current prize based on the landing index and update the maximum prize on the go.
 * Time Complexity: O(l)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int l, a, b;
    cin >> l >> a >> b;

    int maxPrize = 0;

    for(int i=1; i<=l; i++){
        int currPrize = (a+(i*b)) % l;
        maxPrize = max(maxPrize, currPrize);
    }

    cout << maxPrize << "\n";
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
