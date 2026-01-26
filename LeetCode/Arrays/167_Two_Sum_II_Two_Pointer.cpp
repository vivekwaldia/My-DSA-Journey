/*
 * Problem: 167. Two Sum II - Input Array is Sorted
 * Platform: LeetCode
 * Difficulty: Medium
 * Logic: Initialize two pointers at the start and end of the array.
 - Adjust the pointers based on the comparison between the current sum and the target.
 - Return the 1-based indices of the matching pair.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0, j = n-1;

        while(i < j){
            int sum = numbers[i]+numbers[j];

            if(sum < target){
                i++;
            }
            else if(sum > target){
                j--;
            }
            else{
                return {i+1, j+1};
            }
        }

        return {};
    }
};
