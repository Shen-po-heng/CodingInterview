//83. Remove Duplicates from Sorted List

//right
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head==NULL) return head;
        ListNode* tmpL=head;
        ListNode* tmpR=head->next;
        while(tmpR != NULL){
            if(tmpL->val != tmpR->val){
                tmpL->next=tmpR;
                tmpL=tmpR;
            }
            tmpR=tmpR->next;
        }
        tmpL->next=NULL;
        return head;
    }
};

//worng
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmpL=head;
        ListNode* tmpR=head;
        while(tmpR != NULL){
            tmpR=tmpR->next;
            if(tmpR ==NULL )
                break;
            else if(tmpL->val == tmpR->val){
                tmpR=tmpR->next;
                tmpL->next=tmpR;
                tmpL=tmpR;
            }else{
                tmpL=tmpR;
            }
        }
        
        return head;
    }
};