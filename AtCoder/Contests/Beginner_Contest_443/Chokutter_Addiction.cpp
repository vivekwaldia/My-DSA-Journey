/*
 * Problem: C - Chokutter Addiction
 * Contest: AtCoder Beginner Contest 443
 * Platform: AtCoder
 * Points: 300
 * Logic: Simulation of time intervals to track total viewing time.
 - Start viewing at t=0. The first interruption happens at A[0].
 - For subsequent interruptions, check if the app is open (current interruption time > next scheduled reopen time).
 - If open, add the duration to the total and update the next reopen time to A[i] + 100.
 - Finally, add any remaining valid time from the last reopen until time T.
 * Time Complexity: O(N)
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n, t;
    cin >> n >> t;

    if(n == 0){
        cout << t << "\n";
        return;
    }

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int timeViewed = arr[0];
    int nextSee = timeViewed+100;

    for(int i=1; i<n; i++){
        if(arr[i] > nextSee){
            timeViewed += (arr[i]-nextSee);
            nextSee = arr[i]+100;
        }
    }

    if(nextSee < t){
        timeViewed += (t-nextSee);
    }

    cout << timeViewed << "\n";
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int c = 1;
    // cin >> c;
    while(c--){
        solve();
    }

    return 0;
}
