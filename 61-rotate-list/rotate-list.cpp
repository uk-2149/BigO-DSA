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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* tail = head;

        if(!head) return head;

        int n = 1;

        while(tail->next!=nullptr) {
            tail=tail->next;
            n++;
        }

        k = k%n;

        if(k==0) return head;

        tail->next = head;

        int cnt = (n-k-1);

        while(cnt--) {
            temp = temp->next;
        }

        head = temp->next;
        temp->next = nullptr;

        return head;
    }
};