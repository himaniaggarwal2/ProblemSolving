// https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
bool detectLoop(Node* head)
    {
        Node* fast=head;
        Node* slow=head;
        while( fast!=NULL and fast->next!=NULL){
            
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }