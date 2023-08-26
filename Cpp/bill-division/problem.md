## Bill Division

Two friends Anna and Brian, are deciding how to split the bill at a dinner. Each will only pay for the items they consume. Brian gets the check and calculates Anna's portion. You must determine if his calculation is correct.

For example, assume the bill has the following prices: `bill = [2, 4, 6]`. Anna declines to eat item `k = bill[2]` which costs `6`. If Brian calculates the bill correctly, Anna will pay `(2 + 4) / 2 = 3`. If he includes the cost of `bill[2]`, he will calculate `(2 + 4 + 6) / 2 = 6`. In the second case, he should refund `3` to Anna.

#### Function Description

The function should print **Bon Appetit** if the bill is fairly split. Otherwise, it should print the integer amount of money that Brian owes Anna.

The function has the following parameter(s):

- `bill`: an array of integers representing the cost of each item ordered.
- `k`: an integer representing the zero-based index of the item Anna doesn't eat.
- `b`: the amount of money that Anna contributed to the bill.

#### Input Format

- The first line contains two space-separated integers `n` and `k`, the number of items ordered and the `0`-based index of the item that Anna did not eat.

- The second line contains `n` space-separated integers `bill[i]` where `0 <= i < n`.

- The third line contains an integer, `b`, the amount of money that Brian charged Anna for her share of the bill.

#### Constraints

- `2 <= n <= 10^5`
- `0 <= k < n`
- `0 <= bill[i] <= 10^4`
- `0 <= b <= (i = 0 to n - 1) bill[i]` [***i*** running from **0** to **n - 1**]
- The amount of money due Anna will always be an integer

#### Output Format

- If Brian did not overcharge Anna, print Bon Appetit on a new line; otherwise, print the difference (i.e., `b(charged) - b(actual)`) that Brian must refund to Anna. This will always be an integer.
