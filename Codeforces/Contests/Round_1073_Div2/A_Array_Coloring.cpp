/*
 * Problem: A - Array Coloring
 * Contest: Codeforces Round 1073 (Div. 2)
 * Platform: Codeforces
 * Rating: N/A
 * Tags: Constructive Algorithms
 * Logic: 
 - Assign colors (Red/Blue) to indices 0 to n-1 in an alternating pattern to satisfy the adjacency condition.
 - Sort the card values and verify if the corresponding pre-assigned colors also alternate in the sorted sequence. 
 * Time Complexity: O(N * log N)
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    vector<int> vec(n);
    vector<char> col(n);

    for(int i=0; i<n; i++){
        cin >> vec[i];
        if((i & 1) == 0){
            col[i] = 'r';
        }
        else{
            col[i] = 'b';
        }
    }

    vector<int> aux(n);

    for(int i=0; i<n; i++){
        aux[i] = i;
    }

    sort(aux.begin(), aux.end(), [&](int i, int j){
        return vec[i] < vec[j];
    });

    for(int i=0; i<n-1; i++){
        if(col[aux[i+1]] == col[aux[i]]){
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
