class Solution {
public:
    ListNode* LastNthNode(ListNode* head, int n) {
    ListNode* temp = head;
    n--;  // move only n-1 times
    while(n--) {
        temp = temp->next;
    }
    return temp;
}

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL|| k==0)return head;
        ListNode* tail=head;
        //int len=0;  (it will count no. of links and not
        // no. of nodes)
        int len=1;
        while(tail->next!=NULL){
            len++;
            tail=tail->next;

        }
        if(k%len==0)return head;
        k=k%len;  //For bigger values of k;
        tail->next=head;
        ListNode* newtail=LastNthNode(head,len-k);
        head=newtail->next;
        newtail->next=NULL;
        return head;

    }
};