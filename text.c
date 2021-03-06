/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* newnode=NULL;
    if(head==NULL||head->next==NULL)
        return head;
    struct ListNode* cur=head->next;
   
    while(head)
    {
        head->next=newnode;
        newnode=head;
      
        head=cur;
       
        if(cur!=NULL) 
            cur=cur->next;
    }
    return newnode;
}