/*
 * Problem: LMP2 - Odd String
 * Contest: Starters 221
 * Platform: CodeChef
 * Rating: 1074
 * Logic: Verify that no three identical characters are arranged such that their indices differ by only odd amounts.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    int freq[26] = {0};
    bool isPossible = true;

    for(int i=0; i<n; i++){
        int idx = s[i]-'a';

        freq[idx]++;

        if(freq[idx] > 2){
            isPossible = false;
            break;
        }
    }

    if(isPossible){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
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
