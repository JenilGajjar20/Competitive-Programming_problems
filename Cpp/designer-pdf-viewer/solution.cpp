#include <iostream>
#include <vector>
using namespace std;

int designerPdfViewer(vector<int> h, string word)
{
    int maxHeight = 0;

    for (char c : word)
    {
        int height = h[c - 'a'];
        maxHeight = max(maxHeight, height);
    }

    int highlightedArea = maxHeight * word.length();
    return highlightedArea;
}

int main()
{
    int h[26] = {1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 1, 1, 5, 5, 1, 5, 2, 5, 5, 5, 5, 5, 5};

    vector<int> heights(h, h + sizeof(h) / sizeof(h[0]));
    string word;
    cout << "Enter the word: ";
    cin >> word;

    int result = designerPdfViewer(heights, word);
    cout << "Result: " << result << endl;

    return 0;
}