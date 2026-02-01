/*
 * Problem: 3809. Best reachable tower
 * Contest: Biweekly Contest 174
 * Platform: LeetCode
 * Difficulty: Medium
 * Logic: Iterate through each tower to calculate its Manhattan distance from the given center.
 - Check if the tower is within the radius; if so, consider it as a candidate.
 - Update the best tower if the current one has higher quality, or equal quality with lexicographically smaller coordinates.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int> ans(2, -1);
        int highestQuality = INT_MIN;

        int cx = center[0];
        int cy = center[1];

        int n = towers.size();

        for(int i=0; i<n; i++){
            int xc = towers[i][0];
            int yc = towers[i][1];
            int qf = towers[i][2];

            int fp = abs(xc-cx);
            int sp = abs(yc-cy);
            int md = fp+sp;

            if(md > radius){
                continue;
            }
            else{
                if(qf > highestQuality){
                    ans = {xc, yc};
                    highestQuality = qf;
                }
                else if(qf == highestQuality){
                    if(xc < ans[0]){
                        ans = {xc, yc};
                    }
                    else if(xc == ans[0]){
                        if(yc < ans[1]){
                            ans = {xc, yc};
                        }
                    }
                }
            }
        }

        return ans;
    }
};
