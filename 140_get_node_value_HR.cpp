//! Get Node value
//! https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem?isFullScreen=true
/*
Given a pointer to the head of a linked list and a specific position, determine the data value at that position. Count backwards from the tail node. The tail is at postion 0, its parent is at 1 and so on.

Example
head refers to 3->2->1->0->NULL
positionFromTail = 2
Each of the data values matches its distance from the tail. The value 2 is at the desired position.
*/

//todo Approach 2 --> length LL - postion

void findKNode(SinglyLinkedListNode* &head, int &positionFromTail, int &ans){
    
    SinglyLinkedListNode* temp = head;
    
    if(temp == NULL)
        return;
        
    findKNode(temp->next, positionFromTail, ans);
    
    if(positionFromTail == 0)
        ans = temp->data;
    
    positionFromTail--;    
}

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int ans;
    findKNode(llist, positionFromTail, ans);
    return ans;
}