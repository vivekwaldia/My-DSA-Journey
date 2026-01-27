/*
 * Problem: 3813. Vowel-Consonant Score
 * Platform: LeetCode
 * Difficulty: Easy
 * Logic: Iterate through the string to count the occurrences of vowels and consonants.
 - Ignore spaces and numeric digits during the iteration.
 - Calculate the score as the floor of the vowel count divided by the consonant count (if consonants > 0); otherwise return 0.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    int vowelConsonantScore(string s) {
        int n = s.length();
        int v = 0, c = 0;

        for(int i=0; i<n; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                v++;
            }
            else if(s[i] == ' ' || (s[i] >= '0' && s[i] <= '9')){
                continue;
            }
            else{
                c++;
            }
        }

        double score = 0;

        if(c > 0){
            score = floor((double)v/c);
        }

        return (int)score;
    }
};
