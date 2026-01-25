/*
 * Problem: A. Social Experiment
 * Contest: Codeforces Round 1072 (Div. 3)
 * Platform: Codeforces
 * Rating: 800
 * Tags: Math
 * Logic: People can be organized to either even groups or odd groups. No person is left out in case of even pairing, 1 person is left out in case of odd pairing.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n;
    cin >> n;

    if(n == 2 || n == 3){
        cout << n << "\n";
        return;
    }

    if((n & 1) == 0){
        cout << 0 << "\n";
    }
    else{
        cout << 1 << "\n";
    }
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
