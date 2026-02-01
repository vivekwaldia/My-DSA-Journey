/*
 * Problem: 3827. Count Monobit Integers
 * Contest: Weekly Contest 487
 * Platform: LeetCode
 * Difficulty: Easy
 * Logic: Iterate through numbers from 0 to n.
 * - Check if the number satisfies the condition ((i) & (i + 1)) == 0.
 * - This bitwise property holds true for integers that are one less than a power of two (binary representation of all 1s) or 0.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <iostream>
using namespace std;

class Solution {
public:
    int countMonobit(int n) {
        int count = 0;

        for(int i=0; i<=n; i++){
            if(((i) & (i+1)) == 0){
                count++;
            }
        }

        return count;
    }
};
