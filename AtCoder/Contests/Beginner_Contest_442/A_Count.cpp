/*
 * Problem: A - Count
 * Contest: AtCoder Beginner Contest 442
 * Platform: AtCoder
 * Points: 100
 * Logic: Iterate through the string and count the occurrences of the dotted letters 'i' and 'j'.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    string s;
    cin >> s;

    int ans = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(s[i] == 'i' || s[i] == 'j'){
                ans++;
            }
        }
    }

    cout << ans << "\n";
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
