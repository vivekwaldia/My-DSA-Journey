/*
 * Problem: STOPCOUNT - Stop the Count
 * Contest: Starters 218
 * Platform: CodeChef
 * Rating: 893
 * Logic: Calculate votes both in favour and not in favour of Chef. Check in how many possible ways Chef can win at a given time.
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

    int chefVotes = 0, antiChefVotes = 0, numWays = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '1'){
            chefVotes++;
        }
        else{
            antiChefVotes++;
        }

        if(chefVotes > antiChefVotes){
            numWays++;
        }
    }

    cout << numWays << "\n";
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
