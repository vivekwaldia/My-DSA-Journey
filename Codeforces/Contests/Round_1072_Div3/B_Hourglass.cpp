/*
 * Problem: B - Hourglass
 * Contest: Codeforces Round 1072 (Div. 3)
 * Platform: Codeforces
 * Rating: N/A
 * Tags: Math
 * Logic: Calculate the remaining sand based on flipping time and current index. Find out the remaining time by subtracting remSand with currTime.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int s, k, m;
    cin >> s >> k >> m;

    int remSand;

    if(s <= k){
        remSand = s;
    }
    else{
        int idx = m/k;

        if((idx & 1) == 0){
            remSand = s;
        }
        else{
            remSand = k;
        }
    }

    int currTime = m % k;
  
    int remTime = max(0LL, remSand-currTime);

    cout << remTime << "\n";
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
