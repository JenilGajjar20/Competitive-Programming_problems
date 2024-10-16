class Node {
    public:
        int val;    // Value of the node
        int key;    // Key of the node
        int cnt;    // Frequency count
        Node* next; // Pointer to the next node
        Node* prev; // Pointer to the previous node
    Node (int keys, int value) {
        key = keys;
        val = value;
        cnt = 1;  // Initialize frequency count
    }
};

class List {
    public:
        Node* head; // Dummy head node
        Node* tail; // Dummy tail node
        int size;   // Number of nodes in the list
        List () {
            head = new Node(-1, -1);
            tail = new Node(-1, -1);
            head->next = tail; // Connect head to tail
            tail->prev = head; // Connect tail to head
            size = 0;          // Initialize size
        }

        // Add node to the front of the list
        void addFront(Node* node) {
            Node* nextNode = head->next;
            head->next = node; // Insert node after head
            node->prev = head;
            nextNode->prev = node;
            node->next = nextNode;
            size++; // Increment size
        }

        // Remove a node from the list
        void remove(Node* node) {
            Node* delPrev = node->prev;
            Node* delNext = node->next;
            delNext->prev = delPrev; // Bypass the node to be deleted
            delPrev->next = delNext;
            size--; // Decrement size
        }
};

class LFUCache {
private:
    unordered_map<int, Node*> nodeMap; // Map to track nodes by key
    unordered_map<int, List*> listMap;  // Map to track lists by frequency
    int maxCapacity;                     // Maximum capacity of the cache
    int minFreq;                         // Minimum frequency of nodes
    int currentCap;                      // Current number of nodes in the cache

    // Update the list for the accessed or modified node
    void updateList(Node* node) {
        nodeMap.erase(node->key); // Remove from nodeMap
        int freq = node->cnt;      // Get current frequency
        listMap[freq]->remove(node); // Remove from current frequency list
        if (freq == minFreq && listMap[minFreq]->size == 0) {
            minFreq++; // Increment minFreq if list is empty
        }
        node->cnt += 1;            // Increment the frequency count
        freq++;
        List* newList = new List(); // Create a new list for the new frequency
        if (listMap.find(freq) != listMap.end()) {
            newList = listMap[freq]; // Reuse existing list if available
        }
        newList->addFront(node);    // Add node to the front of the new frequency list
        nodeMap[node->key] = node;  // Update nodeMap with the node
        listMap[freq] = newList;    // Update listMap with the new list
    }
public:
    LFUCache(int capacity) {
        maxCapacity = capacity; // Set max capacity
        minFreq = 0;           // Initialize minimum frequency
        currentCap = 0;        // Initialize current capacity
    }
    
    // Retrieve value by key
    int get(int key) {
        if (nodeMap.find(key) != nodeMap.end()) {
            Node* node = nodeMap[key]; // Find the node
            int value = node->val;      // Get the value
            updateList(node);           // Update the list for this node
            return value;               // Return the value
        }
        return -1; // Return -1 if key not found
    }
    
    // Insert or update value by key
    void put(int key, int value) {
        if (nodeMap.find(key) != nodeMap.end()) {
            Node* node = nodeMap[key]; // Find the existing node
            node->val = value;          // Update the value
            updateList(node);           // Update the list for this node
        } else {
            // Remove least frequently used node if capacity is exceeded
            if (currentCap == maxCapacity) {
                List* currList = listMap[minFreq]; // Get the list with min frequency
                Node* node = currList->tail->prev; // Get the least used node
                nodeMap.erase(node->key); // Remove from nodeMap
                currList->remove(node);    // Remove from the list
                currentCap--;              // Decrement current capacity
            }
            // Insert new node
            currentCap++;
            minFreq = 1; // Reset min frequency for new node
            List* newList = new List();
            if (listMap.find(1) != listMap.end()) {
                newList = listMap[1]; // Reuse existing list if available
            }
            Node* node = new Node(key, value); // Create new node
            newList->addFront(node);    // Add new node to the front
            nodeMap[key] = node;        // Update nodeMap with the new node
            listMap[minFreq] = newList; // Update listMap with the new list
        }
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
