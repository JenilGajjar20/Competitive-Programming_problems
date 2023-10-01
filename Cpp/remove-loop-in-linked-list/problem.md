## Remove loop in Linked List

Given a linked list of N nodes such that it may contain a loop.

A loop here means that the last node of the link list is connected to the node at position X(1-based index). If the link list does not have any loop, X=0.

Remove the loop from the linked list, if it is present, i.e. unlink the last node which is forming the loop.

#### Example

```
Input:
N = 3
value[] = {1,3,4}

Output: 1
```

1 -> 3 -> 4      
&emsp;&emsp;^ &emsp;&nbsp;|  
&emsp;&emsp;|_____|     
A loop is present. If you remove it  successfully, the answer will be 1.



#### Returns

- `Bool`: A loop is their or not

#### Your Task

You don't need to read input or print anything. Your task is to complete the function removeLoop() which takes the head of the linked list as the input parameter. Simply remove the loop in the list (if present) without disconnecting any nodes from the list. Note: The generated output will be 1 if your submitted code is correct. 

#### Constraints

- `1 ≤ N ≤ 10^4`
<!-- - `1 <= ar[i] <= 100` where `0 <= i < n` -->
