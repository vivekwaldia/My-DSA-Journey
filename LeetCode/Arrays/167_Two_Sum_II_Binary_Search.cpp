/*
 * Problem: 167. Two Sum II - Input Array is Sorted
 * Platform: LeetCode
 * Difficulty: Medium
 * Logic: Iterate through the array to select the first number and calculate the required missing value.
 - Perform a binary search to locate the value and return the corresponding 1-indexed pairs.
 * Time Complexity: O(N * log N)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        for(int i=0; i<n; i++){
            int first = numbers[i];
            int missing = target-first;

            int left = i+1;
            int right = n-1;

            while(left <= right){
                int mid = left+(right-left)/2;

                if(numbers[mid] == missing){
                    return {i+1, mid+1};
                }
                else if(numbers[mid] < missing){
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }
            }
        }

        return {};
    }
};
