/*
 * Problem: 167. Two Sum II - Input Array is Sorted
 * Platform: LeetCode
 * Difficulty: Medium
 * Logic: Iterate two pointers, i and j, from front and back respectively. Perform increment/decrement operations on them based on the conditional checks between sum and target. Return the 1-indexed pointers. 
 * Time Complexity: O(n)
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
