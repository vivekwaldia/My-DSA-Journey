/*
 * Problem: 3819. Rotate Non-Negative Elements
 * Platform: LeetCode
 * Difficulty: Medium
 * Logic: Extract all non-negative numbers into a separate list while preserving their order.
 - Perform a left rotation on this list by k positions (using the reverse method: reverse first k, reverse the rest, then reverse the whole).
 - Iterate through the original array and replace the non-negative slots with the rotated values, leaving negative numbers untouched.
 * Time Complexity: O(N)
 * Space Complexity: O(N)
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> positive;
        positive.reserve(n);

        for(int i=0; i<n; i++){
            if(nums[i] >= 0){
                positive.push_back(nums[i]);
            }
        }

        int x = positive.size();
        if(x == 0) return nums;
        k %= x;

        // Rotate left by k
        reverse(positive.begin(), positive.begin()+k);
        reverse(positive.begin()+k, positive.end());
        reverse(positive.begin(), positive.end());

        int j = 0;

        for(int i=0; i<n; i++){
            if(nums[i] >= 0){
                nums[i] = positive[j++];
            }
        }

        return nums;
    }
};
