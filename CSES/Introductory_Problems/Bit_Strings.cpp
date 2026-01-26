/*
 * Problem: Bit Strings
 * Platform: CSES
 * Logic: A number n can have maximum 2^n bit strings.
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

    int n;
    cin >> n;

    cout << binPow(2, n) << "\n";
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
