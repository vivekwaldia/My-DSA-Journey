/*
 * Problem: D - Swap and Range Sum
 * Contest: AtCoder Beginner Contest 442
 * Platform: AtCoder
 * Points: 400
 * Logic: Utilize a Fenwick Tree to maintain prefix sums and handle dynamic updates.
 - Update the tree during swaps by adding the value difference to the respective indices.
 - Calculate the range sums efficiently using the standard sum query.
 * Time Complexity: O((N + Q) * log N); Q = Number of queries
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
using namespace std;
using namespace atcoder;

#define int long long

void solve(){

    int n, q;
    cin >> n >> q;

    fenwick_tree<int> ft(n);
    vector<int> seq(n);

    for(int i=0; i<n; i++){
        cin >> seq[i];
        ft.add(i, seq[i]);
    }

    cin.ignore();

    string line;

    while(getline(cin, line)){
        stringstream ss(line);

        int choice;
        ss >> choice;

        switch(choice){
            case 1:{
                int x;
                ss >> x;

                int first = seq[x-1], second = seq[x];

                ft.add(x-1, second-first);
                ft.add(x, first-second);

                swap(seq[x], seq[x-1]);

                break;
            }

            case 2:{
                int l, r;
                ss >> l >> r;

                l--;

                int sum = ft.sum(l, r);

                cout << sum << "\n";

                break;
            }
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
