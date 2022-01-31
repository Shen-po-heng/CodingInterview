//141. Linked List Cycle
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
    bool hasCycle(ListNode *head) {
        ListNode *tmp=head;
        unordered_set<ListNode*> s;
        while(tmp != NULL){
            if (s.find(tmp) == s.end())
               s.insert(tmp);    
            else
                return true;
            tmp=tmp->next;
        }
        
        return false;
    }
};
