class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        // Split the sentences into words using the split function
        vector<string> words1 = split(sentence1);
        vector<string> words2 = split(sentence2);
        
        // Ensure words1 is the smaller vector; if not, swap them
        if(words1.size() > words2.size()) swap(words1, words2);
        
        // Initialize pointers for both word lists
        int ptr1 = 0; // Pointer for words1
        int ptr2 = 0; // Pointer for words2
        
        // Get the sizes of the word vectors
        int n1 = words1.size(); // Size of words1
        int n2 = words2.size(); // Size of words2

        // Compare words from the start of both sentences
        while(ptr1 < n1 && words1[ptr1] == words2[ptr1]) {
            ptr1++; // Move the pointer forward if the words match
        }    

        // Compare words from the end of both sentences
        while(ptr2 < n1 && words1[n1 - 1 - ptr2] == words2[n2 - 1 - ptr2]) {
            ptr2++; // Move the pointer backward if the words match
        }
        
        // Check if the total matched words from the front and back covers all words in words1
        return ptr1 + ptr2 >= n1; // Return true if all words from words1 are matched
    }
    
    // Helper function to split a sentence into words
    vector<string> split(string &s) {
        vector<string> words; // Vector to store the words
        stringstream ss(s); // Create a stringstream object for the input string
        string word; // Variable to hold each word
        
        // Extract words from the stringstream until no words are left
        while (ss >> word) {
            words.push_back(word); // Add the extracted word to the words vector
        }
        
        return words; // Return the vector of words
    }
};


//Standard CPP optimization snippet
static const auto init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();