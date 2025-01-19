//! Intersection of Two Linked Lists

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA->next != NULL && tempB->next != NULL){
            if(tempA == tempB)
                return tempA;

            tempA = tempA->next;
            tempB = tempB->next;
        }

        if(tempA->next == NULL && tempB->next == NULL && tempA != tempB)
            return NULL;

        if(tempA->next == NULL){
            int lenB = 0;
            while(tempB->next != NULL){
                tempB = tempB->next;
                lenB++;
            }

            while(lenB--){
                headB = headB->next;
            }
        }

        else{
            int lenA = 0;
            while(tempA->next != NULL){
                tempA = tempA->next;
                lenA++;
            }

            while(lenA--){
                headA = headA->next;
            }
        }

        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }

        return headA;
    }
};