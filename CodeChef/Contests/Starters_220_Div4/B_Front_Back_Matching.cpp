/*
 * Problem: FBMATCH - Front Back Matching
 * Contest: Starters 220
 * Platform: CodeChef
 * Rating: 632
 * Logic: Map the frequencies to count the occurrences of each element.
 - Check if any element appears more than once.
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

    bool isPossible = false;

    int freq[26] = {0};

    for(int i=0; i<n; i++){
        int idx = s[i]-'a';

        freq[idx]++;

        if(freq[idx] > 1){
            isPossible = true;
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
