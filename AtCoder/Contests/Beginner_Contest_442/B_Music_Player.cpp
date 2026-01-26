/*
 * Problem: B - Music Player
 * Contest: AtCoder Beginner Contest 442
 * Platform: AtCoder
 * Points: 200
 * Logic: Iterate over the music array and use simple if-else conditions to simulate the music player.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int q;
    cin >> q;

    vector<int> music(q);

    for(int i=0; i<q; i++) cin >> music[i];

    int vol = 0;
    bool isOn = false;

    for(int i=0; i<q; i++){

        if(music[i] == 1){
            vol += 1;
        }
        else if(music[i] == 2){
            if(vol >= 1){
                vol--;
            }
        }
        else{
            if(!isOn){
                isOn = true;
            }
            else{
                isOn = false;
            }
        }

        if(isOn && vol >= 3){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
