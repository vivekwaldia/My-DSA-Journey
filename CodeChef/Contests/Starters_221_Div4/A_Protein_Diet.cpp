/*
 * Problem: LMP1 - Protein Diet
 * Contest: Starters 221
 * Platform: CodeChef
 * Rating: 110
 * Logic: Evaluate the condition to check if X is greater than or equal to Y.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int x, y;
    cin >> x >> y;

    if(x >= y){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n"; 
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
