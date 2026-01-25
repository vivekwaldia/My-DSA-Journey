/*
 * Problem: C. The Smallest String Concatenation
 * Contest: Educational Codeforces Round 9
 * Platform: Codeforces
 * Rating: 1700
 * Tags: Sorting, Strings
 * Logic: Use a custom comparator with sort function for the lexicographically smallest string.
 * Time Complexity: O(N * log N * L); L = Maximum length of a string
 * Space Complexity: O(N * L)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n;
    cin >> n;

    vector<string> arr;
    arr.reserve(n);

    for(int i=0; i<n; i++){
        string s;
        cin >> s;

        arr.push_back(s);
    }

    sort(arr.begin(), arr.end(), [](const string& a, const string& b){
        return a+b < b+a;
    });

    for(int i=0; i<n; i++){
        cout << arr[i];
    }

    cout << "\n";
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
