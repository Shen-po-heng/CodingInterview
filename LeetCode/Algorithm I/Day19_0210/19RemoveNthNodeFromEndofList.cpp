//19. Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(0);
        dummy->next = head;

        ListNode* tmp=head;
        int size=0;
        while(tmp){
            tmp=tmp->next;
            size++;
        }
        tmp=dummy;
        for(int i=0;i<size-n;i++){
            tmp=tmp->next;
        }
        tmp->next=tmp->next->next;
        return dummy->next;
    }
};

/*
Think about it. If you don't use dummy
What condition do you need to solve?

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
           
            ListNode* tmp=head;
            int size=0;
            while(tmp){
                tmp=tmp->next;
                size++;
            }
            tmp=head;
            for(int i=1;i<size-n;i++){
                tmp=tmp->next;
            }
            //<=1,>1
            if(size-n<0)
                return NULL;
            else if(size-n==0)
                return head->next;
            
            tmp->next=tmp->next->next;
            return head;
    }
};
*/