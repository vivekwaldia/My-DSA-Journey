/*
 * Problem: STREAK - The Coding Streak
 * Contest: Starters 224
 * Platform: CodeChef
 * Rating: 633
 * Logic: Iterate through the array to find the maximum length of consecutive days where at least 1 problem is solved.
 * Time Complexity: O(N)
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int streak = 0, temp = 0;

    for(int i=0; i<n; i++){
        if(arr[i] >= 1){
            temp++;
        }
        else{
            streak = max(streak, temp);
            temp = 0;
        }
    }

    streak = max(streak, temp);

    cout << streak << "\n";
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
