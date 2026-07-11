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
    ListNode* reversell(ListNode* head){

       if(head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* last =  reversell(head->next);
             head->next->next = head;
            head ->next = NULL;
            

        
        return last;
    }
    void reorderList(ListNode* head) {
        ListNode* fast = head ;
        ListNode* slow = head;


        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* rev = reversell(slow);

        ListNode* curr = head;

        while(rev->next != NULL) {
            ListNode* tempcurr = curr->next;
            curr->next = rev;

            ListNode* temprev = rev->next;
            rev->next = tempcurr;

            curr = tempcurr;
            rev = temprev;
        }
    }
};
