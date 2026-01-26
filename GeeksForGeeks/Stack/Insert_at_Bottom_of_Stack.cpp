/*
 * Problem: Insert an Element at the Bottom of a Stack
 * Platform: GeeksForGeeks
 * Difficulty: Easy
 * Logic: Use recursion to pop all elements from the stack until it becomes empty.
 - Push the target element **x** onto the empty stack, effectively placing it at the base.
 - Push the previously popped elements back onto the stack as the recursion unwinds, maintaining their original relative order.
 * Time Complexity: O(N)
 * Space Complexity: O(N)
 */

#include <iostream>
#include <stack>
using namespace std;

class Solution {
  public:
    void helper(stack<int>& st, int x){
         if(st.empty()){
            st.push(x);
            return;
        }

        int temp = st.top();
        st.pop();

        helper(st, x);

        st.push(temp);
    }

    stack<int> insertAtBottom(stack<int> st, int x) {
        helper(st, x);

        return st;
    }
};
