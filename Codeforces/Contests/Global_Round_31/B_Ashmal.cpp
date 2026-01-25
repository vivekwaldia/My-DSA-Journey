/*
 * Problem: B. Ashmal
 * Contest: Codeforces Global Round 31 (Div. 1 + Div. 2)
 * Platform: Codeforces
 * Rating: 800
 * Tags: Greedy, Strings
 * Logic: Use a deque to check both the prefix and suffix concatenation cases for the smallest lexicographical order and perform the push operations accordingly.
 * Time Complexity: O(Total Length of Strings)
 * Space Complexity: O(Total Length of Strings)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n;
    cin >> n;

    deque<string> dq;

    string first;
    cin >> first;

    dq.push_back(first);

    for(int i=1; i<n; i++){
        string s;
        cin >> s;

        if(s+dq.front() < dq.front()+s){
            dq.push_front(s);
        }
        else{
            dq.push_back(s);
        }
    }

    for(auto i : dq){
        cout << i;
    }

    cout << "\n";
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
