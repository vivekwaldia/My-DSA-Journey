/*
 * Problem: 387. First Unique Character in a String
 * Platform: LeetCode
 * Difficulty: Easy
 * Logic: Map the character frequencies to count occurrences.
 - Traverse the string to find the first index with a frequency of 1 and return it; otherwise, return -1.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        int freq[26] = {0};

        for(int i=0; i<n; i++){
            freq[s[i]-'a']++;
        }

        for(int i=0; i<n; i++){
            if(freq[s[i]-'a'] == 1){
                return i;
            }
        }

        return -1;
    }
};
