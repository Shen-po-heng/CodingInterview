//160. Intersection of Two Linked Lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tmpA=headA;
        ListNode* tmpB=headB;
        int lenA=0;
        int lenB=0;
        
        while (tmpA){
            lenA+=1;
            tmpA=tmpA->next;
        }
        while (tmpB){
            lenB+=1;
            tmpB=tmpB->next;
        }

        while (lenA > lenB){
            headA = headA->next;
            lenA-=1;
        }
        while(lenA < lenB){
            headB = headB->next;
            lenB-=1;
        }
            
            
        while( headA !=headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};