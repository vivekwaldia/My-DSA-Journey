/*
 * Problem: BALLOONS - Coloured Balloons
 * Contest: Starters 218
 * Platform: CodeChef
 * Rating: 584
 * Logic: Calculate the total cost by multiplying each balloon count by its price.
 - Accumulate the results into a running total.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n;
    cin >> n;

    int totalCost = 0;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;

        totalCost += ((i+1)*(temp));
    }

    cout << totalCost << "\n";
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
