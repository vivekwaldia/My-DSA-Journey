/*
 * Problem: DELARR77 - Deleting Array Again
 * Contest: Starters 218
 * Platform: CodeChef
 * Rating: 1444
 * Logic: Identify the minimum valid cost from C based on the left-shift constraint.
 - Multiply this minimum by the current element of A and accumulate the total cost.
 * Time Complexity: O(N)
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n;
    cin >> n;

    vector<int> A(n);
    
    for(int i=0; i<n; i++) cin >> A[i];

    vector<int> C(n);

    for(int i=0; i<n; i++) cin >> C[i];

    int totalCost = 0, currMinCost = C[0];

    for(int i=0; i<n; i++){
        if(C[i] < currMinCost){
            currMinCost = C[i];
        }

        totalCost += (A[i]*currMinCost);
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
