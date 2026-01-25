/*
 * Problem: 242. Valid Anagram
 * Platform: LeetCode
 * Difficulty: Easy
 * Logic: Map the frequencies by incrementing/decrementing the frequency array for each string respectively. Return false if all frequencies don't get cancelled out, otherwise return true.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26] = {0};

        for(int i=0; i<s.length(); i++){
            freq[s[i]-'a']++;
        }

        for(int i=0; i<t.length(); i++){
            freq[t[i]-'a']--;
        }

        for(int i=0; i<26; i++){
            if(freq[i] != 0){
                return false;
            }
        }

        return true;
    }
};
