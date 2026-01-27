/*
 * Problem: 3810. Minimum Operations To Reach Target Array
 * Platform: LeetCode
 * Difficulty: Medium
 * Logic: Iterate through the arrays to identify indices where the current value differs from the target value.
 - Insert the values from nums at these mismatching indices into a set to find the count of unique incorrect numbers.
 - Since one operation updates all occurrences of a chosen value to their respective targets simultaneously, the answer is simply the number of unique values that need changing.
 * Time Complexity: O(N * log U), where U is the number of unique incorrect values.
 * Space Complexity: O(U)
 */

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        set<int> ans;
        
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] != target[i]){
                ans.insert(nums[i]);
            }
        }

        return ans.size();
    }
};
