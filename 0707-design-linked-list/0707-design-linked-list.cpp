class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = nullptr;
    }
};

class MyLinkedList {
private:
    Node* head;

public:
    MyLinkedList() {
        head = nullptr;
    }
    
    int get(int index) {
        Node* temp = head;
        int count = 0;

        while(temp != nullptr){
            if(count == index) return temp->val;
            temp = temp->next;
            count++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if(head == nullptr){
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
        if(index == 0){
            addAtHead(val);
            return;
        }

        Node* temp = head;
        int count = 0;

        while(temp != nullptr && count < index - 1){
            temp = temp->next;
            count++;
        }

        if(temp == nullptr) return;

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        if(head == nullptr) return;

        if(index == 0){
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        Node* temp = head;
        int count = 0;

        while(temp->next != nullptr && count < index - 1){
            temp = temp->next;
            count++;
        }

        if(temp->next == nullptr) return;

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
};