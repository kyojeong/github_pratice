class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* head=l1;
        while(1){
            l1->val=l1->val+l2->val;
            if(l1->val>=10){
                if(l1->next){
                    ++l1->next->val;
                    l1->val=l1->val-10;
                }
                else{
                    ListNode* temp=new ListNode(1);
                    l1->next=temp;
                    l1->val=l1->val-10;
                }
            }
            
            if(l2->next!=nullptr && l1->next==nullptr){
                ListNode* temp=new ListNode(0);
                l1->next=temp;
            }
            else if(l2->next==nullptr && l1->next!=nullptr){
                ListNode* temp=new ListNode(0);
                l2->next=temp;
            }
            else if(l2->next==nullptr && l1->next==nullptr){
                break;
            }
            
            
            l1=l1->next;
            l2=l2->next;
        }
        
        return head;
    }
};
