/*
 * Problem: 3803. Count Residue Prefixes
 * Contest: Weekly Contest 484
 * Platform: LeetCode
 * Difficulty: Easy
 * Logic: Iterate through the string to examine every prefix.
 - Maintain a running count of distinct characters using a frequency array.
 - For each prefix, check if the count of distinct characters equals the current prefix length modulo 3, and increment the result if true.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Solution {
public:
    int residuePrefixes(string s) {
        int n = s.length();
        int cnt = 0, uniCnt = 0;

        int freq[26];
        memset(freq, 0, sizeof(freq));

        for(int i=0; i<n; i++){
            int idx = s[i]-'a';

            if(freq[idx] == 0){
                uniCnt++;
            }

            freq[idx]++;
            int prefLen = i+1;

            if(uniCnt == prefLen % 3){
                cnt++;
            }
        }
        return cnt;
    }
};
