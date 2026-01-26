/*
 * Problem: B - MEX Reordering
 * Contest: Codeforces Round 1073 (Div. 2)
 * Platform: Codeforces
 * Rating: N/A
 * Tags: Constructive Algorithms, Sorting
 * Logic: 
 - MEX is strictly determined by the smallest missing non-negative integer.
 - If no '0' exists, MEX is always 0 on both sides, making equality unavoidable.
 - If multiple '0's exist but no '1' exists, any split containing a '0' on both sides 
 - results in a MEX of 1 for both prefix and suffix.
 * Time Complexity: O(N)
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    vector<int> vec(n);

    int cnt_zero = 0;
    int cnt_one = 0;
    
    for(int i=0; i<n; i++){
        cin >> vec[i];
        if(vec[i] == 0){
            cnt_zero++;
        }
        else if(vec[i] == 1){
            cnt_one++;
        }
    }

    if(cnt_zero == 0){
        cout << "NO" << "\n";
        return;
    }

    if(cnt_zero >= 2){
        if(cnt_one == 0){
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
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
