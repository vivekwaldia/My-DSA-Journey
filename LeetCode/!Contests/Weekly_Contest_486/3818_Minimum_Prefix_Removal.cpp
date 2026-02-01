/*
 * Problem: 3818. Minimum Prefix Removal to Make Array Strictly Increasing
 * Contest: Weekly Contest 486
 * Platform: LeetCode
 * Difficulty: Medium
 * Logic: Iterate backwards from the end of the array to identify the longest suffix that is strictly increasing.
 - Stop at the first index where the strict increasing order is violated (current element <= previous element).
 - The index at which the loop breaks represents the minimum number of elements (prefix length) that must be removed.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n = nums.size();
        int i = n-1;

        for(; i>0; i--){
            if(nums[i] <= nums[i-1]){
                break;
            }
        }

        return i;
    }
};
