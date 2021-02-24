//https://leetcode.com/problems/odd-even-linked-list/

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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode *sample= new ListNode();
        sample=head->next;
        ListNode *start1= new ListNode();
        start1=head;
        ListNode *start2= new ListNode();
        start2=sample;
        while(head and head->next and sample and sample->next){
            head->next=head->next->next;
            if(head->next)head=head->next;
            sample->next=sample->next->next;
            if(sample->next)sample=sample->next;
        }
         head->next=start2;
                            
        return start1;
    }
};