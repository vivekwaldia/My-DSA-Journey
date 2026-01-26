/*
 * Problem: A - Table with Numbers
 * Contest: Codeforces Round 1075 (Div. 2)
 * Platform: Codeforces
 * Rating: N/A
 * Tags: Greedy, Implementation
 * Logic: 
 - Each pair (x, y) adds to the sum only if 1 <= x <= h and 1 <= y <= l.
 - Sort the array to greedily pair the smallest available numbers with the 
 - largest available numbers that can still satisfy the (row, col) bounds.
 - If the largest number 'j' can't fit as a row or a column with 'i', it's 
 - useless, so we discard it and try the next largest.
 * Time Complexity: O(N * log N)
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){

    int n, h, l;
    cin >> n >> h >> l;

    vector<int> arr(n);

    for(int i=0; i<n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int cnt = 0;
    int i=0, j=n-1;

    while(i < j){
        int first = arr[i];
        int second = arr[j];

        if(second > l && second > h){
            j--;
            continue;
        }

        if((arr[i] <= l && arr[j] <= h) || (arr[i] <= h && arr[j] <= l)){
            cnt++;
            i++;
            j--;
        }
        else{
            j--;
        }
    }

    cout << cnt << "\n";
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
