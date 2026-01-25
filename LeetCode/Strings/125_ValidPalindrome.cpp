/*
 * Problem: 125. Valid Palindrome
 * Platform: LeetCode
 * Difficulty: Easy
 * Logic: Use two pointers to iterate the string, skip non-alphanumeric characters, check for equality by converting to lowercase, return true/false respectively.
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length()-1;

        while(i < j){
            while(i < j && !isalnum(s[i])){
                i++;
            }

            while(i < j && !isalnum(s[j])){
                j--;
            }

            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};
