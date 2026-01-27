/*
 * Problem: 3804. Number of Centered Subarrays
 * Platform: LeetCode
 * Difficulty: Medium
 * Logic: Iterate through all possible subarrays using nested loops for start (i) and end (j).
 - Maintain a running sum and use a hash set to store elements of the current subarray for O(1) lookups.
 - For each step, check if the current subarray sum exists within the hash set; if so, increment the result.
 * Time Complexity: O(N^2)
 * Space Complexity: O(N)
 */

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n = nums.size();
        int res = 0;

        for(int i=0; i<n; i++){
            long long sub_arr_sum = 0;
            unordered_set<long long> seen;

            for(int j=i; j<n; j++){
                sub_arr_sum += nums[j];
                seen.insert(nums[j]);

                if(seen.count(sub_arr_sum)){
                    res++;
                }
            }
        }

        return res;
    }
};
