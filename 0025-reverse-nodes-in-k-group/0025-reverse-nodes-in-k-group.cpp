/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        int count = 0;
        
        // Count the remaining nodes
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            count++;
        }
        
        // If there are at least k nodes, reverse them
        if (count >= k) {
            count = 0;
            while (curr != nullptr && count < k) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
            }
            if (next != nullptr) {
                head->next = reverseKGroup(next, k);
            }
            return prev; // 'prev' now points to the new head of the reversed group
        }
        // If there are less than k nodes remaining, no need to reverse
        return head;
    }
};
//TC-O(n2)
//SC-O(n/k)