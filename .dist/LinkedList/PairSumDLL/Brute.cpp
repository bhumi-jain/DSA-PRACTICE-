vector<pair<int,int>> pairWithSumDLL(Node* head, int sum) {
    vector<pair<int,int>> final;
    Node* temp1 = head;

    while (temp1 != NULL) {
        Node* temp2 = temp1->next;
        while (temp2 != NULL) {
            int s = temp1->data + temp2->data;
            if (s == sum) {
                final.push_back({temp1->data, temp2->data});
            }
            else if (s > sum) {
                break; // Optimization- no need to check further since DLL is sorted
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }

    return final;
}
