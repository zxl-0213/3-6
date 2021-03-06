/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param pHead ListNode类 
 * @param k int整型 
 * @return ListNode类
 */
struct ListNode* FindKthToTail(struct ListNode* pHead, int k ) {
    // write code here
    struct ListNode* fast=pHead;
    struct ListNode* slow=pHead;
    //if(pHead==NULL)
        //return pHead;
    while(k--)
    {
        if(fast)
            fast=fast->next;
        else
            return NULL;
    }
       
    while(fast)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}