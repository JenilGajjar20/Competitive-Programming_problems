#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct Compare {
    bool operator()(ListNode *a, ListNode *b) {
        return a->val > b->val; // Min-heap based on the value
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> minHeap;
        
        // Push the head of each list into the min heap
        for (ListNode* list : lists) {
            if (list) {
                minHeap.push(list);
            }
        }
        
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (!minHeap.empty()) {
            // Get the smallest node from the heap
            ListNode* smallestNode = minHeap.top();
            minHeap.pop();
            tail->next = smallestNode;
            tail = tail->next; // Move the tail

            // If there's a next node, push it into the heap
            if (smallestNode->next) {
                minHeap.push(smallestNode->next);
            }
        }

        return dummy.next; // Return the merged list
    }
};
