/*
 * Problem: AABBCCDD - AabBcCDd
 * Contest: Starters 224
 * Platform: CodeChef
 * Rating: 972
 * Logic: Iterate through the string and count the frequency of each character, treating uppercase and lowercase as the same.
 - Sort the frequency array in descending order.
 - The maximum score is obtained by combining the two most frequent characters, so output the sum of the top two frequencies.
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

    int freq[26];
    memset(freq, 0, sizeof(freq));

    for(int i=0; i<n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            freq[s[i]-'A']++;
        }
        else{
            freq[s[i]-'a']++;
        }
    }

    sort(freq, freq+26, greater<int>());

    cout << freq[0] + freq[1] << "\n";
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
