/*
 * Problem: B - Substring 2
 * Contest: AtCoder Beginner Contest 438
 * Platform: AtCoder
 * Points: 200
 * Logic: Brute force every possible alignment of the substring within the main string.
 - Calculate the conversion cost for each position and track the minimum operations.
 * Time Complexity: O(N^2)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    int size = n-m;
    int ans = 1e18;

    for(int i=0; i<=size; i++){
        int temp = 0;
        for(int j=0; j<m; j++){
            int digS = s[i+j]-'0';
            int digT = t[j]-'0';

            int conv = digS-digT;

            if(conv < 0) conv += 10;

            temp += conv;
        }
        ans = min(ans, temp);
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
