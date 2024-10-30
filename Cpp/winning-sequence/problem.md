# Count the Number of Winning Sequences

## Problem Description

You are given a string `s` consisting of characters `'F'`, `'W'`, and `'G'`, representing three types of players in a tournament:

- `'F'`: Fighter
- `'W'`: Warrior
- `'G'`: Gladiator

Each type of player has specific rules for winning and losing against the other types:

1. **Fighter (`'F'`)** defeats Gladiator (`'G'`), but loses to Warrior (`'W'`).
2. **Warrior (`'W'`)** defeats Fighter (`'F'`), but loses to Gladiator (`'G'`).
3. **Gladiator (`'G'`)** defeats Warrior (`'W'`), but loses to Fighter (`'F'`).

The sequence of matches in the string `s` represents consecutive rounds of competition. Each match affects the score based on whether it’s a win, loss, or a draw.

## Objective

The goal is to count the number of possible sequences of matches in `s` that lead to a “winning” outcome by the end of the tournament. A sequence is defined as "winning" if the final score difference (wins minus losses) is non-negative at the end of all matches.

Since the result may be large, return the answer modulo `10^9 + 7`.

---

### Constraints

- `1 <= s.length <= 1000`
- `s` contains only characters `'F'`, `'W'`, and `'G'`.

### Example

**Input**
```plaintext
s = "FWG"
```

**Output**
```plaintext
5
```

In this example, there are 5 possible ways for the sequence to result in a winning outcome.