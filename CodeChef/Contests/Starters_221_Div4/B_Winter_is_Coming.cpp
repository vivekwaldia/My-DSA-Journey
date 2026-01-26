/*
 * Problem: LMP2E - Winter is Coming
 * Contest: Starters 221
 * Platform: CodeChef
 * Rating: 723
 * Logic: Use a boolean variable to track current jacket wear status. Remember to remove the jacket if temperature > b.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    bool hasJacket = false;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;

        if(temp < a && hasJacket == false){
            ans++;
            hasJacket = true;
        }
        else if(temp > b){
            hasJacket = false;
        }
    }

    cout << ans << "\n";
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
