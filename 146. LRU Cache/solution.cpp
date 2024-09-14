class DoublyLinkedList {
public:
    DoublyLinkedList* next;
    DoublyLinkedList* prev;
    int key;
    int val;

    DoublyLinkedList(int value) : val(value), next(nullptr), prev(nullptr) {}
};


class LRUCache {
public:
    int cap;
    DoublyLinkedList* head, *tail;
    map<int, DoublyLinkedList*> mp;
    LRUCache(int capacity) {
        this->cap = capacity;
        head = nullptr;
        tail = nullptr;
    }
    
    int get(int key) {
        if(mp.find(key) != mp.end()){
            DoublyLinkedList* node = mp[key];
            if(node != tail){
                if(node == head){
                    head = head->next;
                    head->prev = nullptr;
                }
                else{
                    node->prev->next = node->next;
                    node->next->prev = node->prev;
                }
                tail->next = node;
                node->prev = tail;
                node->next = nullptr;
                tail = node;
            }
            return mp[key]->val;
        }
        else{
            return -1;
        }
    }
                    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()){
            DoublyLinkedList* node = mp[key];
            node->val = value;
            if(node != tail){
                if(node == head){
                    head = head->next;
                    head->prev = nullptr;
                }
                else{
                    node->prev->next = node->next;
                    node->next->prev = node->prev;
                }
                tail->next = node;
                node->prev = tail;
                node->next = nullptr;
                tail = node;
            }
        }
        else{
            DoublyLinkedList* newNode = new DoublyLinkedList(value);
            newNode->key = key;
            mp[key] = newNode;

            if(!head){
                head = tail = newNode;
            }
            else{
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }

            if(mp.size() > cap){
                DoublyLinkedList* temp = head;
                head = head->next;
                head->prev = nullptr;
                mp.erase(temp->key);
                delete temp;
            }
        }
    }
};
