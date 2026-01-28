/*
 * Problem: 42. Trapping Rain Water
 * Platform: LeetCode
 * Difficulty: Hard
 * Logic: Identify the highest peak in the array to divide the problem into two parts.
 - Traverse from the left to the peak, maintaining a running maximum; if the current bar is lower than the maximum, add the difference to the total water.
 - Similarly, traverse from the right to the peak using the same logic to calculate trapped water on the other side.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int peakIdx = 0;
        for(int i=1; i<n; i++){
            if(height[i] > height[peakIdx]){
                peakIdx = i;
            }
        }

        int waterTrapped = 0;
        int currGreatest = height[0];

        for(int i=1; i<=peakIdx; i++){
            if(height[i] < currGreatest){
                waterTrapped += (currGreatest-height[i]);
            }
            else{
                currGreatest = height[i];
            }
        }

        currGreatest = height[n-1];

        for(int i=n-2; i>=peakIdx; i--){
            if(height[i] < currGreatest){
                waterTrapped += (currGreatest-height[i]);
            }
            else{
                currGreatest = height[i];
            }
        }

        return waterTrapped;
    }
};
