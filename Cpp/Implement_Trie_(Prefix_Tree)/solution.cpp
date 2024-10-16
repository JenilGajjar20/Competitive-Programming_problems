class Node {
private:
    // Each node can be linked to 26 different characters (a-z)
    Node* links[26];
    // Flag to denote end of a word
    bool flag;

public:
    // Check if a character link exists
    bool containsKey(char ch) {
        return links[ch - 'a'] != nullptr;  // Return true if link exists
    }
    
    // Create a link to a new node for a character
    void putChar(char ch, Node* node) {
        links[ch - 'a'] = node;  // Link character to the new node
    }
    
    // Retrieve the node linked to a character
    Node* getNode(char ch) {
        return links[ch - 'a'];  // Return the node for the character
    }
    
    // Mark this node as the end of a word
    void setEnd() {
        flag = true;  // Set flag to true
    }
    
    // Check if this node represents the end of a word
    bool getEnd() {
        return flag;  // Return the end-of-word flag
    }
};

class Trie {
private:
    Node* root;  // Root node of the Trie

public:
    // Constructor initializes the Trie
    Trie() {
        root = new Node();  // Create the root node
    }
    
    // Insert a word into the Trie
    void insert(string word) {
        Node* curr = root;  // Start from the root
        
        for (int i = 0; i < word.length(); i++) {
            // If the character link doesn't exist, create a new node
            if (!curr->containsKey(word[i])) {
                Node* newNode = new Node();  // Create new node
                curr->putChar(word[i], newNode);  // Link character to new node
            }
            curr = curr->getNode(word[i]);  // Move to the next node
        }
        curr->setEnd();  // Mark the end of the word
    }
    
    // Search for a word in the Trie
    bool search(string word) {
        Node* curr = root;  // Start from the root
        
        for (int i = 0; i < word.length(); i++) {
            // If any character link is missing, the word is not found
            if (!curr->containsKey(word[i])) {
                return false;  // Word not found
            }
            curr = curr->getNode(word[i]);  // Move to the next node
        }
        return curr->getEnd();  // Return true if end flag is set
    }
    
    // Check if any word in the Trie starts with the given prefix
    bool startsWith(string prefix) {
        Node* curr = root;  // Start from the root
        
        for (int i = 0; i < prefix.length(); i++) {
            // If any character link is missing, the prefix is not found
            if (!curr->containsKey(prefix[i])) {
                return false;  // Prefix not found
            }
            curr = curr->getNode(prefix[i]);  // Move to the next node
        }
        return true;  // All characters in prefix found
    }
};
