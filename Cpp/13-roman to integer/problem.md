<h2><a href="https://leetcode.com/problems/roman-to-integer/description/">📌 13. Roman to integer </a></h2>

<b>LEETCODE PROBLEM</b>

<h3 style="color: Green">Easy</h3>
Roman numerals are represented by seven different symbols:<code> I, V, X, L, C, D and M</code>.

<br>

<b>Symbol</b> <b>Value</b>

<br>

<code>

<b>Symbol &emsp;&emsp; Value</b> <br>
I &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; 1<br>
V &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; 5<br>
X &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; 10<br>
L &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; 50<br>
C &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; 100<br>
D &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; 500<br>
M &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; 1000<br>

</code>
<br>
For example, <code>2</code> is written as <code>II</code> in Roman numeral, just two ones added together. 12 is written as <code>XII</code>, which is simply<code> X + II</code>. The number 27 is written as <code>XXVII</code>, which is <code>XX + V + II</code>.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not <code>IIII</code>. Instead, the number four is written as <code>IV</code>. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as <code>IX</code>. There are six instances where subtraction is used:
<br>

<ul>
<li> <code>I </code>can be placed before <code>V (5)</code> and <code>X (10)</code> to make <code>4</code> and <code>9</code>.</li>
<li><code>X </code>can be placed before <code>L (50)</code> and <code>C (100) </code>to make <code>40 </code>and <code>90</code>.</li>
<li><code>C</code> can be placed before <code>D (500) </code>and <code>M (1000) </code>to make <code>400</code> and <code>900</code>.</li>
</ul>
Given a roman numeral, convert it to an integer.<br>

<p>&nbsp;</p>

<b>Example 1:</b>

<pre><strong>Input:</strong> s = "III"
<strong>Output:</strong> 3
<strong>Explanation:</strong> III=3
</pre>

<b>Example 2:</b>

<pre><strong>Input:</strong> s = "LVIII"
<strong>Output:</strong> 58
<strong>Explanation:</strong> L = 50, V= 5, III = 3.
</pre>

<b>Example 3:</b>

<pre><strong>Input:</strong> s = "MCMXCIV"
<strong>Output:</strong> 1994
<strong>Explanation:</strong> M = 1000, CM = 900, XC = 90 and IV = 4.
</pre>

<p>&nbsp;</p>

<b>Constraints:</b>

- <code>1 <= s.length <= 15</code>
- <code>s</code> contains only the characters <code>('I', 'V', 'X', 'L', 'C', 'D', 'M')</code>.
- It is <b>guaranteed </b>that <code>s </code>is a valid roman numeral in the range <code>[1, 3999]</code>.

<p>&nbsp;</p>

---

---
