// Doubly Linked List class
class Node {
    public:
        int key;      // Key of the node
        int val;      // Value of the node
        Node* prev;   // Pointer to the previous node
        Node* next;   // Pointer to the next node
    public:
        Node (int keys, int value) {
            key = keys;
            val = value;
        }
};

class LRUCache {
private:
    // Dummy head and tail nodes for easier management
    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    int capacity; // Maximum capacity of the cache
    // Hash map to track the nodes in the cache
    unordered_map<int, Node*> mp;

    // Insert node at the front (most recently used)
    void insertNode(Node* node) {
        Node* nextNode = head->next;
        head->next = node;
        node->prev = head;
        nextNode->prev = node;
        node->next = nextNode;
    }

    // Delete a node from the doubly linked list
    void deleteNode(Node* node) {
        Node* delPrev = node->prev;
        Node* delNext = node->next;
        delNext->prev = delPrev;
        delPrev->next = delNext;
    }
public:
    // Constructor to initialize LRUCache with a given capacity
    LRUCache(int cap) {
        head->next = tail;
        tail->prev = head;
        capacity = cap;
        mp.clear(); // Clear the hashmap
    }
    
    // Get the value of the key if it exists, otherwise return -1
    int get(int keys) {
        // Check if key is present in the map
        if (mp.find(keys) != mp.end()) {
            Node* node = mp[keys];
            int ans = node->val; // Retrieve the value
            // Move the accessed node to the front
            mp.erase(keys);
            deleteNode(node);
            insertNode(node);
            mp[keys] = head->next; // Update hashmap with new front
            return ans; // Return the value
        } else return -1; // Key not found
    }
    
    // Insert or update the value of the key
    void put(int keys, int value) {
        // If key already exists
        if (mp.find(keys) != mp.end()) {
            Node* temp = mp[keys];
            temp->val = value; // Update the value
            // Move the updated node to the front
            mp.erase(keys);
            deleteNode(temp);
            insertNode(temp);
            mp[keys] = head->next; // Update hashmap with new front
        } else {
            // If capacity exceeds, remove the least recently used node
            if (capacity == mp.size()) {
                Node* lastNode = tail->prev;
                deleteNode(lastNode);
                mp.erase(lastNode->key); // Remove from hashmap
            }
            // Create a new node and insert it at the front
            Node* newNode = new Node(keys, value);
            insertNode(newNode);
            mp[keys] = head->next; // Add to hashmap
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
