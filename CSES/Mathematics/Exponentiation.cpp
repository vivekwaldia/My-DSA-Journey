/*
 * Problem: Exponentiation
 * Platform: CSES
 * Logic: Compute the result efficiently using the modular exponentiation algorithm.
 * Time Complexity: O(log N)
 * Space Complexity: O(log N)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 1e9+7;

int binPow(int a, int b){

    if(b == 0) return 1;

    if((b & 1) == 1){
        return (a * binPow(a, b-1)) % MOD;
    }
    
    int temp = binPow(a, b/2);
    return (temp * temp) % MOD;
}

void solve(){

    int a, b;
    cin >> a >> b;

    cout << binPow(a, b) << "\n";
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
