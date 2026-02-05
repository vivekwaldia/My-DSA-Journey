/*
 * Problem: ACMDT - Accommodation
 * Contest: Starters 224
 * Platform: CodeChef
 * Rating: 1286
 * Logic: Calculate the minimum rooms required based on total capacity using ceiling division.
 - Calculate the maximum possible rooms based on the constraints of boys and girls required per room.
 - If the required rooms are less than or equal to the creatable rooms, output the required amount, otherwise -1.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int b, g, x, y, n;
    cin >> b >> g >> x >> y >> n;

    int totalPeople = b+g;
    int roomsRequired = (ceil)(((double)totalPeople)/n);
    roomsRequired = (int)roomsRequired;

    int boysLimit = b/x;
    int girlsLimit = g/y;
    int creatableRooms = min(boysLimit, girlsLimit);

    if(roomsRequired <= creatableRooms){
        cout << roomsRequired << "\n";
    }
    else{
        cout << -1 << "\n";
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
