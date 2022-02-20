//876. Middle of the Linked List
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
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp=head;
        int size=0;
        while(tmp){
            tmp=tmp->next;
            size++;
        }
        tmp=head;
        for(int i=0;i<size/2;i++){
            tmp=tmp->next;
        }
        return tmp;
    }
};