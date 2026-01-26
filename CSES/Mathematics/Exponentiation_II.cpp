/*
 * Problem: Exponentiation II
 * Platform: CSES
 * Logic: Apply Fermat's Little Theorem to handle modular exponentiation cycles.
 - Recognize that powers repeat with a period of MOD-1.
 * Time Complexity: O(log N)
 * Space Complexity: O(log N)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

int MOD = 1e9+7;

int binPow(int a, int b, int MOD){

    if(b == 0) return 1;

    if((b & 1) == 1){
        return (a * binPow(a, b-1, MOD)) % MOD;
    }
    
    int temp = binPow(a, b/2, MOD);
    return (temp * temp) % MOD;
}

void solve(){

    int a, b, c;
    cin >> a >> b >> c;

    int exp = binPow(b, c, MOD-1);

    cout << binPow(a, exp, MOD) << "\n";
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
