Node* deleteALLOccurrence(Node* head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            if(temp==head){
                head=head->next;
                if(head!=NULL){
                    head->prev=NULL;
                }
                
            }
            Node* front=temp->next;
            Node* back=temp->prev;
            if(front!=nullptr) front->prev=back;
            if(back!=nullptr)back->next=front;
            delete temp;
            temp=front;
        }
        else{
            temp=temp->next;
        }
    }
   



    return head;
}