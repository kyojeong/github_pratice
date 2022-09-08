class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        ListNode* t=head;
        int size=0;
        while(t){
            ++size;
            t=t->next;
        }
        
        int target=size-n;
        ListNode* ptr=new ListNode(-1,head);
        t=ptr;
        for(int i=0;i<target;++i){
            ptr=ptr->next;
        }
        
        ptr->next=ptr->next->next;
        return t->next;
    }
};
