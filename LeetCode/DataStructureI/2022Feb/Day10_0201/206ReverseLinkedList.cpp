//206. Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        ListNode* tmp01=head;
        ListNode* tmp02=head;
        while(tmp01 != NULL){
            tmp01=tmp01->next;
            if (tmp02==head){
                tmp02->next=NULL;
                tmp02=tmp01;
            }
            else{
                tmp02->next=head;
                head=tmp02;
                tmp02=tmp01;
            }   
            
        }
        return head;
    }
};