class Solution:
    def n2w(self, num):
        # Dictionaries for number to word conversion
        d1 = ["", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"]
        d2 = ["Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"]
        d3 = ["Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"]

        out = ""
        # Handle hundreds
        if num >= 100:
            out += d1[num // 100] + " " + "Hundred "
            num -= (num // 100) * 100

        # Handle tens and units
        if num >= 20:
            out += d3[num // 10 - 1] + " " + d1[num % 10]
        elif num > 10:
            out += d2[num - 11]
        else:
            out += d1[num]
        
        return out.strip()

    def numberToWords(self, num: int) -> str:
        # Return "Zero" for input 0
        if num == 0:
            return "Zero"

        d4 = ["", "Thousand", "Million", "Billion"]

        # Reverse the number for processing in chunks of three
        num = str(num)[::-1]
        arr = [int((num[i:i + 3])[::-1]) for i in range(0, len(num), 3)]
        out = ""

        # Convert each chunk and append the appropriate scale
        for i, x in enumerate(arr):
            if int(x) != 0:
                out = self.n2w(x) + " " + d4[i] + " " + out
                out = out.strip()
        return out
