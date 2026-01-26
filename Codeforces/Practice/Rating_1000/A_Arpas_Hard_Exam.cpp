/*
 * Problem: A - Arpa's hard exam & Mehrdad's naive cheat
 * Contest: Codeforces Round 383 (Div. 2)
 * Platform: Codeforces
 * Rating: 1000
 * Tags: Implementation, Math, Number Theory
 * Logic: Use binary exponentiation with modulo 10 to get the last digit.
 * Time Complexity: O(log N)
 * Space Complexity: O(log N)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 10;

int binPow(int a, int b){

    if(b == 0){
        return 1;
    }

    if((b & 1) == 1){
        return (a * binPow(a, b-1)) % MOD;
    }
    
    int temp = binPow(a, b/2);
    return (temp * temp) % MOD;
}

void solve(){

    int n;
    cin >> n;

    cout << binPow(1378, n) << "\n";
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
