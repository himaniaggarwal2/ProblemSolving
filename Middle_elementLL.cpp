// https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1/?company[]=Nagarro&company[]=Nagarro&page=1&query=company[]Nagarropage1company[]Nagarro#
int getMiddle(Node *head)
{
   if(head==NULL) return -1;
   Node *slow=head;
   Node *fast=head;
   while(fast!=NULL and fast->next!=NULL){
       fast=fast->next->next;
       slow=slow->next;
   }
   return slow->data;
}