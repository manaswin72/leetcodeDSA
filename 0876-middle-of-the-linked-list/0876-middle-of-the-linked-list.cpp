class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        count/=2;
        temp=head;
        while(count--){
            temp=temp->next;
        }
        return temp;
    }
};