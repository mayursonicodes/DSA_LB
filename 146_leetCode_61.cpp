class Solution {
public:

    int findLength(ListNode* head){
        int len = 0;
        while(head != NULL){
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL;
        int len = findLength(head);
        int actualRotate = k % len;
        if(actualRotate == 0) return head;


        int oldTailPos = len-actualRotate-1;

        ListNode* oldHead = head;
        ListNode* oldTail = head;

        while(oldTailPos--){
            oldTail = oldTail->next;
        }

        ListNode* newHead = oldTail->next;
        oldTail->next = NULL;
        ListNode* newTail = newHead;

        while(newTail->next){
            newTail = newTail->next;
        }

        newTail->next = oldHead;
        return newHead;
    }
};