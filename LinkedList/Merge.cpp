//LEETCODE PROBLEM  Merge Two Sorted Linked List
// LINK : https://leetcode.com/problems/merge-two-sorted-lists/
// submission detail : https://leetcode.com/submissions/detail/1523621468/


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
        ListNode dummy(0);
        ListNode* prev = &dummy;
        ListNode* fast = list1;
        ListNode* slow = list2;
        
        while(fast != NULL && slow != NULL){
            if(fast-> val < slow->val ){
                prev-> next = fast;
                fast = fast->next;
            }
            else {
                prev-> next = slow;
                slow = slow-> next;
            }
            prev = prev->next;
        }
        prev -> next = (fast!= NULL)?fast:slow;
        return dummy.next;
    }
};
