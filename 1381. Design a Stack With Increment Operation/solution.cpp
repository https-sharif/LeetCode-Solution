class LinkedList {
public:
    LinkedList* next;
    LinkedList* prev;
    int val;

    LinkedList(int val) : val(val), next(nullptr), prev(nullptr) {}
};

class CustomStack {
public:
    int mx;
    LinkedList* head;
    LinkedList* tail;
    int size;
    CustomStack(int maxSize) {
        mx = maxSize;
        size = 0;
    }
    
    void push(int x) {
        if(size == mx) return;
        if(size == 0){
            head = new LinkedList(x);
            tail = head;
        }
        else{
            LinkedList* temp = new LinkedList(x);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    
    int pop() {
        if(size == 0) return -1;
        int value = tail->val;
        if(size == 1){
            head = nullptr;
            tail = nullptr;
        }
        else{
            tail = tail->prev;
            tail->next = nullptr;
        }
        size--;
        return value;
    }

    void increment(int k, int val) {
        if(size == 0) return;
        LinkedList* start = head;
        int i = 0;
        while(i < k && start != nullptr){
            start->val += val;
            start = start->next;
            i++;
        }
    }
};
