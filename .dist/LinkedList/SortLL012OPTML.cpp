Node* sortLL(Node* head) {
    // Dummy nodes
    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);

    // Pointers to build separate lists
    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;
    Node* temp = head;

    // Segregate nodes into 0s, 1s, and 2s
    while (temp != NULL) {
        if (temp->data == 0) {
            zero->next = temp;
            zero = zero->next;
        }
        else if (temp->data == 1) {
            one->next = temp;
            one = one->next;
        }
        else {
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }

    // Now connect the three lists
    zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
    one->next = twoHead->next;
    two->next = NULL;

    // New head of sorted list
    Node* newHead = zeroHead->next;

    // Free dummy nodes (optional)
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return newHead;
}
