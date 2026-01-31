/*
 * Problem: A - Append s
 * Contest: AtCoder Beginner Contest 443
 * Platform: AtCoder
 * Points: 100
 * Logic: Read the input string S and append the string "s" to its end.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    string s;
    cin >> s;

    cout << s+"s" << "\n";
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
