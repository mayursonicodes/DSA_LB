//! Sort LL using Merge sort

class Solution {
public:

    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(-1);
        ListNode* mptr = ans;

        while(list1 && list2){
            //! Base case
            if(list1 == NULL) return list2;
            if(list2 == NULL) return list1;

            //! comparing list1 & list2 data and join with mptr
            if(list1->val <= list2->val){
                mptr->next = list1;
                mptr = list1;
                // mptr = mptr->next;
                list1 = list1->next;
            }

            else{
                mptr->next = list2;
                mptr = list2;
                list2 = list2->next;
            }
        }

        //! if list1 not empty yet
        if(list1)
            mptr->next = list1;
        if(list2)
            mptr->next = list2;

        return ans->next;
    }

    ListNode* sortList(ListNode* head) {
        
        //! Base case
        if(head == NULL || head->next == NULL) return head;

        //! Breaking LL into two halfs
        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;

        //! Recursion call
        left = sortList(left);
        right = sortList(right);

        //! Merging LL with sorting
        ListNode* mergedLL = merge(left, right);
        return mergedLL;        
    }
};