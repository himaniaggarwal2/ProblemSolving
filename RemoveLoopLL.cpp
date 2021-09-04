// https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1#

void removeLoop(Node* head)
    {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        
        if(slow!=fast) return;
        
        if(fast==head)
        {
            Node *curr=head;
            while(curr->next!=head)
            curr=curr->next;
            curr->next=NULL;
        }
        else
        {
            slow=head;
            while(slow->next!=fast->next)
            {
                slow=slow->next;
                fast=fast->next;
            }
            fast->next=NULL;
        }
    }

    //extra effort cause of the edge case where the loop is on the 0th index