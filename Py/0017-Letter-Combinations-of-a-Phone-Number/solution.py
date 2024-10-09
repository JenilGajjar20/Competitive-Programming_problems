class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []
        
        digit_to_letters = {
            '2': 'abc',
            '3': 'def',
            '4': 'ghi',
            '5': 'jkl',
            '6': 'mno',
            '7': 'pqrs',
            '8': 'tuv',
            '9': 'wxyz'
        }
        
        queue = ['']
        
        for digit in digits:
            letters = digit_to_letters[digit]
            new_queue = []
            
            for combination in queue:
                for letter in letters:
                    new_queue.append(combination + letter)
            
            queue = new_queue
        
        return queue