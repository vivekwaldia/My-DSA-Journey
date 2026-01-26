/*
 * Problem: A - First Contest of the Year
 * Contest: AtCoder Beginner Contest 438
 * Platform: AtCoder
 * Points: 100
 * Logic: Calculate the remaining days and check for modular congruency with 7.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int d, f;
    cin >> d >> f;

    int remDays = d % 7;

    int ans = f-remDays;

    if(ans <= 0){
        ans += 7;
    }

    cout << ans << "\n";
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
