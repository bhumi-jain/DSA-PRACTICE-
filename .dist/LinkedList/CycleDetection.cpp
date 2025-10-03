#include<bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};
bool detectLoop(Node *head) {
        //single node
        if(head==nullptr||head->next==nullptr)return false;
        Node* slow=head;
        Node* fast=head;
        //if SLL
        while(fast!=nullptr&& fast->next!= nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
        return false;
        
    }
    int main() {
    // Create a sample linked list
    // with a loop for testing
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third; 

    // Check if there is a loop 
    // n the linked list
    if (detectLoop(head)) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }
}