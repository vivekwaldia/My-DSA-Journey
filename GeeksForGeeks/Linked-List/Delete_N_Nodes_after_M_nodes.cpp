/*
 * Problem: Delete N nodes after M nodes of a Linked List
 * Platform: GeeksForGeeks
 * Difficulty: Easy
 * Logic: Traverse the list using a current pointer, skipping **M** nodes and then deleting the subsequent **N** nodes by adjusting pointers.
 - Use a loop to move the `current` pointer **M-1** times to reach the last node of the segment to keep.
 - From that node, use a temporary pointer to skip the next **N** nodes.
 - Link the `current->next` to the node following the deleted segment and move `current` to that position to repeat the process.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution {
  public:
    Node* linkdelete(Node* head, int n, int m) {
        if(head == NULL){
            return head;
        }
        
        Node* current = head;
        
        while(current != NULL){
            
            for(int i=1; i<m && current != NULL; i++){
                current = current->next;
            }
            
            if(current == NULL){
                break;
            }
            
            Node* temp = current->next;
            for(int i=1; i<=n && temp != NULL; i++){
                temp = temp->next;
            }
            
            current->next = temp;
            current = temp;
        }
        
        return head;
    }
};
