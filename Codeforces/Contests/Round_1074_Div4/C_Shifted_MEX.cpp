/*
 * Problem: C - Shifted MEX
 * Contest: Codeforces Round 1074 (Div. 4)
 * Platform: Codeforces
 * Rating: N/A
 * Tags: Implementation, Sorting
 * Logic: 
 - Sort the array to bring consecutive elements together.
 - Iterate through the sorted array, tracking the length of the current 
 - consecutive sequence (where difference between elements is exactly 1).
 - Handle duplicate values by skipping them (difference is 0).
 - Maintain a global maximum 'ans' for the longest sequence found.
 * Time Complexity: O(N * log N)
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    int ans = 1, temp = 1;

    for(int i=0; i<n-1; i++){
        int diff = vec[i+1]-vec[i];

        if(diff == 1){
            temp++;
        }
        else if(diff == 0){
            continue;
        }
        else{
            ans = max(ans, temp);
            temp = 1;
        }
    }

    ans = max(ans, temp);

    cout << ans << "\n";
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
