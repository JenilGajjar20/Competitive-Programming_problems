class Solution {
public:
    Node* copyRandomList(Node* head) {
        // Check if the input linked list is empty
        if (!head) {
            return nullptr;
        }

        // Step 1: Create transition nodes for each original node
        Node* current = head;
        while (current) {
            // Create a new node with the same value as the original node
            Node* new_node = new Node(current->val);
            // Insert the new node after the current node
            new_node->next = current->next;
            current->next = new_node;
            // Move to the next pair of nodes
            current = new_node->next;
        }

        // Step 2: Set random pointers for the copied nodes
        current = head;
        while (current) {
            if (current->random) {
                // Set the random pointer of the copied node
                current->next->random = current->random->next;
            }
            // Move to the next pair of nodes
            current = current->next->next;
        }

        // Step 3: Separate the copied nodes from the original list
        Node* dummy = new Node(0);
        current = head;
        Node* temp = dummy;
        while (current) {
            // Extract the copied nodes and rebuild the original list
            temp->next = current->next;
            temp = temp->next;
            current->next = current->next->next;
            current = current->next;
        }

        // Return the head of the copied list
        return dummy->next;
    }
};
