/*
 * Problem: Rat in a Maze
 * Platform: GeeksForGeeks
 * Difficulty: Medium
 * Logic: Employ backtracking to explore all valid paths (U, D, L, R) from the start (0,0) to the destination (n-1, m-1).
 - Use a `memo` matrix to mark the current cell as visited (0) before making recursive calls to prevent infinite loops.
 - Verify base cases: check if the current position is out of bounds, a blocked cell (0), or already visited.
 - Backtrack by unmarking the cell (resetting to 1) and removing the last character from the path string after exploring all possible directions from that cell. 
 * Time Complexity: O(3^(N^2))
 * Space Complexity: O(N^2)
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    void helper(vector<vector<int>>& maze, string& temp, vector<string>& sol, vector<vector<int>>& memo, int n, int m, int r, int c){
        if(r >= n || c >= m || r < 0 || c < 0){
            return;
        }

        if(maze[r][c] == 0){
            return;
        }

        if(r == n-1 && c == m-1){
            sol.push_back(temp);
            return;
        }

        if(memo[r][c] != 1){
            return;
        }
        
        memo[r][c] = 0;
        
        // up
        temp.push_back('U');
        helper(maze, temp, sol, memo, n, m, r-1, c);
        temp.pop_back();
        
        // down
        temp.push_back('D');
        helper(maze, temp, sol, memo, n, m, r+1, c);
        temp.pop_back();
        
        // left
        temp.push_back('L');
        helper(maze, temp, sol, memo, n, m, r, c-1);
        temp.pop_back();
        
        // right
        temp.push_back('R');
        helper(maze, temp, sol, memo, n, m, r, c+1);
        temp.pop_back();
        
        memo[r][c] = 1;
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        if(maze.empty() || maze[0].empty()){
            return {};
        }

        int n = maze.size();
        int m = maze[0].size();

        string temp = "";
        
        vector<string> sol;
        vector<vector<int>> memo(n, vector<int>(m, 1));
        
        helper(maze, temp, sol, memo, n, m, 0, 0);
        sort(sol.begin(), sol.end());

        return sol;
    }
};
