// https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/584/week-1-february-1st-february-7th/3627/

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
	ListNode *tortoise=new ListNode();
	tortoise=head;
	ListNode *hare=new ListNode();
	hare=head;
	while(tortoise and tortoise->next){
		tortoise=tortoise->next->next;
		hare=hare->next;
		if(tortoise==hare)return true;
	}
		return false;
    }
};