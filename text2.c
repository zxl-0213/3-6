/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
   
    
    if(head==NULL)
        return head;
    struct ListNode* cur=head;
    
    struct ListNode* prev=head;
    
    while(cur)
    {   
        if(cur->val==val)
        {

            if(head->val==val)
             {
        
                head=cur->next;
                free(cur);
                cur=head;

             }
             else
             {
                 

                prev->next=cur->next;
                free(cur);
                cur=prev->next;
             }
           
        }
        else
        {
            
            prev=cur;
            cur=cur->next;
        }
    }
    return head;
}