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
        ListNode* cur1=list1;
        ListNode* cur2=list2;
        ListNode* dummy = new ListNode(0);
        ListNode* cur3 = dummy;
        while(cur1!=nullptr && cur2!=nullptr){
            if(cur1->val <= cur2->val){
                cur3->next=cur1;
                cur1=cur1->next;
            }else{
                cur3->next=cur2;
                cur2=cur2->next;
            }
            cur3 = cur3->next;
        }
        while(cur1!=nullptr){
            cur3->next=cur1;
            cur1=cur1->next;
            cur3 = cur3->next;
        }
        while(cur2!=nullptr){
            cur3->next=cur2;
            cur2=cur2->next;
            cur3 = cur3->next;
        }
        return dummy->next;
    }
};
