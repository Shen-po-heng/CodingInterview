//203. Remove Linked List Elements

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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        while(head){
            if(head->val==val){
                head=head->next;
            }else{
                break;
            }
        }
        if(head==NULL)
            return head;
        
        ListNode* tmp_R=head->next;
        ListNode* tmp_L=head;
        
        while(tmp_R){
            //initial
            
            //normal
            if(tmp_R->val ==val){
                tmp_R=tmp_R->next;
                tmp_L->next=tmp_R;
            }
            else{
                tmp_R=tmp_R->next;
                tmp_L=tmp_L->next;
            }
            
            
        }
        return head;
    }
};