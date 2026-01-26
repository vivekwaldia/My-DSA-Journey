/*
 * Problem: A - Perfect Root
 * Contest: Codeforces Round 1074 (Div. 4)
 * Platform: Codeforces
 * Rating: N/A
 * Tags: Constructive Algorithms, Math
 * Logic: 
 - Output a simple permutation of numbers from 1 to n.
 - This satisfies the construction requirement by maintaining a linear sequence.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    for(int i=1; i<n; i++){
        cout << i << " ";
    }

    cout << n << "\n";
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
