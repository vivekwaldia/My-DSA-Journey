/*
 * Problem: 387. First Unique Character in a String
 * Platform: LeetCode
 * Difficulty: Easy
 * Logic: Map the frequencies of each character. For the first index that has frequency = 1, return index, else return -1.
 * Time Complexity: O(n)
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
