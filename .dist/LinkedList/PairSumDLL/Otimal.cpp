Node* findTail(Node* head) {
    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    return tail;
}

vector<pair<int, int>> findPairDLL(Node* head, int sum) {
    vector<pair<int, int>> ans;
    if (!head) return ans; // empty list check

    Node* left = head;
    Node* right = findTail(head);

    while (left != right && right->next != left) {
        int s = left->data + right->data;

        if (s == sum) {
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->prev;
        }
        else if (s > sum) {
            right = right->prev;
        }
        else {
            left = left->next;
        }
    }

    return ans;
}
