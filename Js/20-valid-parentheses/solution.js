// Define a function called "isValid" that takes a string "s" as input
var isValid = function (s) {
    // Stack to store left symbols
    const leftSymbols = [];

    // Loop for each character of the string
    for (let i = 0; i < s.length; i++) {
        // If left symbol is encountered (open brackets), push it onto the stack
        if (s[i] === '(' || s[i] === '{' || s[i] === '[') {
            leftSymbols.push(s[i]);
        }
        // If right symbol is encountered (close brackets)
        else if (s[i] === ')' && leftSymbols.length !== 0 && leftSymbols[leftSymbols.length - 1] === '(') {
            // Check if the corresponding open bracket exists on the stack and matches
            leftSymbols.pop(); // Pop the open bracket from the stack
        } else if (s[i] === '}' && leftSymbols.length !== 0 && leftSymbols[leftSymbols.length - 1] === '{') {
            leftSymbols.pop(); // Pop the open curly brace from the stack
        } else if (s[i] === ']' && leftSymbols.length !== 0 && leftSymbols[leftSymbols.length - 1] === '[') {
            leftSymbols.pop(); // Pop the open square bracket from the stack
        }
        // If none of the valid symbols is encountered, return false (invalid expression)
        else {
            return false;
        }
    }

    // After processing the entire string, if there are no unmatched open brackets left in the stack, return true (valid expression)
    return leftSymbols.length === 0;
};
