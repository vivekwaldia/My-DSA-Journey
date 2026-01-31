/*
 * Problem: 11. Container With Most Water
 * Platform: LeetCode
 * Difficulty: Medium
 * Logic: Optimized Two-Pointer approach.
 - Calculate area defined by left and right pointers.
 - If height[left] < height[right], move left forward (it's the bottleneck).
 - If height[right] < height[left], move right backward (it's the bottleneck).
 - If heights are equal, move BOTH pointers inward. Neither can form a larger container since the width decreases and they are the limiting height.
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
    int maxArea(vector<int>& height) {
        int area = 0;
        int left = 0, right = height.size()-1;

        while(left < right){
            int h = min(height[left], height[right]);
            int currArea = h*(right-left);
            area = max(area, currArea);

            if(height[left] < height[right]){
                left++;
            }
            else if(height[right] < height[left]){
                right--;
            }
            else {
                left++;
                right--;
            }
        }

        return area;
    }
};
