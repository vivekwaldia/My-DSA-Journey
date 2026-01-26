/*
 * Problem: XMASTREE - Christmas Trees
 * Contest: Starters 218
 * Platform: CodeChef
 * Rating: 300
 * Logic: Calculate the net profit by subtracting the cost of purchased trees from the revenue of sold trees.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n, a, m, b;
    cin >> n >> a >> m >> b;

    cout << (m*b)-(n*a) << "\n";
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
