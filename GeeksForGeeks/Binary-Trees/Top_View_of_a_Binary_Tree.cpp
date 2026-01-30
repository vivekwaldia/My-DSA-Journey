/*
 * Problem: Top View of a Binary Tree
 * Platform: GeeksForGeeks
 * Difficulty: Medium
 * Logic: Perform a Level Order Traversal (BFS) to visit nodes line by line.
 - Use a `queue` to store pairs of `{Node*, horizontal_distance}`.
 - Maintain a `map` (key: horizontal distance, value: node data). The map keeps keys sorted from left to right.
 - For every node, if its horizontal distance is NOT in the map, add it. Since we use BFS, the first node seen at a specific distance is guaranteed to be the topmost one.
 - Traverse the map to collect the values in order.
 * Time Complexity: O(N * log N) (N for traversal, log N for map insertion)
 * Space Complexity: O(N) (For the map and queue storage)
 */

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

void helper(Node* root, map<int, int>& map){

    queue<pair<Node*, int>> q;
    q.push(make_pair(root, 0));

    while(!q.empty()){
        auto currPair = q.front();
        q.pop();

        auto currNode = currPair.first;
        auto currHd = currPair.second;

        if(map.count(currHd) == 0){
            map[currHd] = currNode->data;
        }

        if(currNode->left != nullptr){
            auto leftPair = make_pair(currNode->left, currHd-1);
            q.push(leftPair);
        }

        if(currNode->right != nullptr){
            auto rightPair = make_pair(currNode->right, currHd+1);
            q.push(rightPair);
        }
    }
}

class Solution {
  public:
    vector<int> topView(Node *root) {
        vector<int> vec;
        
        map<int, int> map;
        helper(root, map);

        for(auto i : map){
            vec.push_back(i.second);
        }

        return vec;
    }
};
