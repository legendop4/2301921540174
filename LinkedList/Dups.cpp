//LEETCODE PROBLEM  Remove Duplicates From Sorted Linked List 
// LINK : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// submission detail : http://leetcode.com/submissions/detail/1523047533/

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
        ListNode* res = head;
        while(head && head->next){
            if(head-> val == head-> next -> val){
                head-> next = head-> next -> next;
            }else{
                head = head-> next;
            }   
        }
        return res;
    }
};
