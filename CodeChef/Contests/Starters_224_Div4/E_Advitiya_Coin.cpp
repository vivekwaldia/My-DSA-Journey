/*
 * Problem: ADC - Advitiya Coin
 * Contest: Starters 224
 * Platform: CodeChef
 * Rating: 1682
 * Logic: Iterate through the prices while tracking the minimum and maximum price seen in the current segment.
 - Check if buying at the tracked minimum or selling at the tracked maximum yields a profit greater than K against the current price.
 - If a winning trade is possible, increment the count and reset the trackers for the next segment.
 * Time Complexity: O(N)
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n, k;
    cin >> n >> k;

    vector<int> prices(n);

    for(int i=0; i<n; i++){
        cin >> prices[i];
    }

    int trades = 0;
    int maxPrice = prices[0], minPrice = prices[0];

    int si = 1;

    while(si < n){
        int case1 = prices[si]-minPrice;
        int case2 = maxPrice-prices[si];

        if(case1 > k || case2 > k){
            trades++;
            si++;

            if(si < n){
                maxPrice = prices[si];
                minPrice = prices[si];
            }
        }
        else{
            maxPrice = max(maxPrice, prices[si]);
            minPrice = min(minPrice, prices[si]);

            si++;
        }
    }

    cout << trades << "\n";
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
