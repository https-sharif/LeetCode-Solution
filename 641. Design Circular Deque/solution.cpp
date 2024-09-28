class List {
    public:
    int val;
    List* prev;
    List* next;

    List(int val) : val(val), prev(nullptr), next(nullptr) {}
};

class MyCircularDeque {
public:
    List* head;
    List* tail;
    int size;
    int mxsize;
    MyCircularDeque(int k) {
        size = 0;
        mxsize = k;
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;
        if(size == 0) {
            head = new List(value);
            tail = head;
        }
        else{
            List* temp = new List(value);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;
        if(size == 0) {
            head = new List(value);
            tail = head;
        }
        else{
            List* temp = new List(value);
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
        size++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        head = head->next;
        size--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        tail = tail->prev;
        size--;
        return true;
    }
    
    int getFront() {
        if(size == 0) return -1;
        return head->val;
    }
    
    int getRear() {
        if(size == 0) return -1;
        return tail->val;
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == mxsize;
    }
};
