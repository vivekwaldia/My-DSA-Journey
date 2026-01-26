/*
 * Problem: C - Huge Pile
 * Contest: Codeforces Round 1072 (Div. 3)
 * Platform: Codeforces
 * Rating: N/A
 * Tags: Binary Search, Depth-First Search/Similar, Dynamic Programming, Graphs, Math
 * Logic: Recursively check for the minimum time required using memoization. Split the problem into two halves on the basis of odd/even nature of n.
 * Time Complexity: O(log N)
 * Space Complexity: O(log N)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

map<int, int> memo;

int dfs(int n, int k){

    if(n == k){
        return 0;
    }

    if(n < k){
        return 1e18;
    }

    if(memo.count(n)){
        return memo[n];
    }

    if((n & 1) == 0){
        return memo[n] = 1+dfs(n/2, k);
    }

    int lowerL = n/2;
    int upperL = (n+1)/2;

    int option1 = dfs(lowerL, k);
    int option2 = dfs(upperL, k);

    return memo[n] = 1+min(option1, option2);
}

void solve(){

    int n, k;
    cin >> n >> k;

    memo.clear();

    int ans = dfs(n, k);

    if(ans >= 1e18){
        cout << -1 << "\n";
    }
    else{
        cout << ans << "\n";
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
