// Last updated: 31/05/2026, 11:44:50
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pointerA = headA;
        ListNode* pointerB = headB;

        while(pointerA != pointerB){
            if(pointerA == NULL){
                pointerA = headB;
            }else{
                pointerA = pointerA->next;
            }

            if(pointerB == NULL){
                pointerB = headA;
            }else{
                pointerB = pointerB->next;
            }
        }

        return pointerA;
    }
};