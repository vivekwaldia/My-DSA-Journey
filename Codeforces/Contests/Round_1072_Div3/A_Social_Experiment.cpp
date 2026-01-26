/*
 * Problem: A - Social Experiment
 * Contest: Codeforces Round 1072 (Div. 3)
 * Platform: Codeforces
 * Rating: N/A
 * Tags: Math
 * Logic: Determine the number of unassigned people based on the parity of the group.
 - Even grouping leaves no one out, while odd grouping leaves one person remaining.
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
