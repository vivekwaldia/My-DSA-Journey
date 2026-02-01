/*
 * Problem: 3828. Final Element After Subarray Deletions
 * Platform: LeetCode
 * Difficulty: Medium
 * Logic: Alice makes the first move and can remove a subarray of length `n-1` (since n-1 < n).
 * - She can remove indices `0` to `n-2`, leaving only the last element (`nums[n-1]`).
 * - Alternatively, she can remove indices `1` to `n-1`, leaving only the first element (`nums[0]`).
 * - Since she plays optimally to maximize the result, she essentially chooses the larger of the two ends immediately. Bob gets no turns.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

class Solution {
public:
    int finalElement(vector<int>& nums) {
        int n = nums.size();

        int first = nums[0], last = nums[n-1];

        return max(first, last);
    }
};
