/*
 * Problem: C - Peer Review
 * Contest: AtCoder Beginner Contest 442
 * Platform: AtCoder
 * Points: 300
 * Logic: Map the conflict count for each researcher to determine the number of valid reviewers.
 - Iterate through the researchers and calculate valid combinations using the nC3 formula.
 * Time Complexity: O(N + M)
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n, m;
    cin >> n >> m;

    vector<int> enemyFreq(n+1, 0);

    for(int i=0; i<m; i++){
        int first, second;
        cin >> first >> second;

        enemyFreq[first]++;
        enemyFreq[second]++;
    }

    for(int i=1; i<=n; i++){
        int rem = n-enemyFreq[i]-1;
        if(rem < 3){
            cout << 0 << "\n";
        }
        else{
            int comb = (rem*(rem-1)*(rem-2))/6;
            cout << comb << "\n";
        }
    }
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
