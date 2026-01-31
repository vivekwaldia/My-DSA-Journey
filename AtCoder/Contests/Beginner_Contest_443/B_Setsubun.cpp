/*
 * Problem: B - Setsubun
 * Contest: AtCoder Beginner Contest 443
 * Platform: AtCoder
 * Points: 200
 * Logic: Simulate the bean-eating process year by year.
 - Start with the current age N and total beans eaten so far.
 - In each iteration, increment the age, add the new age to the running total, and increment the year counter until the total reaches K.
 * Time Complexity: O(sqrt(K))
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n, k;
    cin >> n >> k;

    int cnt = 0, temp = n;

    while(1){

        if(temp >= k){
            break;
        }

        n++;
        temp += n;
        
        cnt++;
    }

    cout << cnt << "\n";
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
