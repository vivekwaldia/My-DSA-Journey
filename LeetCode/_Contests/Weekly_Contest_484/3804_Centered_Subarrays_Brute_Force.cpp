/*
 * Problem: 3804. Number of Centered Subarrays
 * Platform: LeetCode
 * Difficulty: Medium
 * Logic: Iterate through all possible subarrays using nested loops for start and end indices.
 - Calculate the sum of the current subarray elements.
 - Traverse the current subarray to check if the sum equals any element within it.
 * Time Complexity: O(N^3)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n = nums.size();
        int res = 0;

        for(int i=0; i<n; i++){
            long long sub_arr_sum = 0;

            for(int j=i; j<n; j++){
                sub_arr_sum += nums[j];

                for(int k=i; k<=j; k++){
                    if(sub_arr_sum == nums[k]){
                        res++;
                        break;
                    }
                }
            }
        }
        
        return res;
    }
};
