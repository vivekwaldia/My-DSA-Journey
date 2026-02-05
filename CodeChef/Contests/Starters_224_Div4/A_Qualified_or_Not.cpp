/*
 * Problem: QNOT - Qualified or Not
 * Contest: Starters 224
 * Platform: CodeChef
 * Rating: 206
 * Logic: Check if N is greater than or equal to twice of X and also greater than or equal to twice of Y.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n, x, y;
    cin >> n >> x >> y;

    if(n >= 2*x && n >= 2*y){
        cout << "YES" << "\n";
        return;
    }

    cout << "NO" << "\n";
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
