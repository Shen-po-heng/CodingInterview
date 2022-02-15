//21. Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         //initial situation
        if(list1==NULL && list2==NULL)
            return list1;
        else if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
            
        //non-NULL
        ListNode* head;//list 3
        ListNode* tmp=head;         
        
        
        if(list1->val <= list2->val){
            head=tmp=list1;
            list1=list1->next;
        }
        else{
            head=tmp=list2;
            list2=list2->next;
        }
        
        //merge
        while(tmp){  
          if(list1==NULL){
              tmp->next=list2;
              list2=list2->next;
              break;
          }else if(list2==NULL){
              tmp->next=list1;
              list1=list1->next;
              break;
          }
              
          //normal  
            if(list1->val <= list2->val){
                tmp->next=list1;
                list1=list1->next;
            }
            else{
                tmp->next=list2;
                list2=list2->next;
            }
            tmp=tmp->next;
        }
                
                
        return head;
       
        
    }
};