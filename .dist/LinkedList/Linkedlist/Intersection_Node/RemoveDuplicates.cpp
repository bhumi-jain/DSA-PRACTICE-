//REMOVE DUPLICATES FROM A SORTED LINKEDLIST
Node* removeDuplicates(Node* head){
    if(head==NULL||head->next==NULL)return head;
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        Node* nextNode=temp->next;
        while(nextNode!=NULL && temp->val==nextNode->val){
            Node* duplicate=nextNode;// since we need to remove all duplicates
            nextNode=nextNode->next;
            delete(duplicate);
        }
        
        temp->next=nextNode;
       if(nextNode!=NULL) nextNode->prev=temp;
        
        temp=temp->next;
    }
    return head; 
}