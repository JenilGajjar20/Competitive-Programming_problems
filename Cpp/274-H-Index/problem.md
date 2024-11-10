## 276. H - Index

The H-Index is a metric used to measure the productivity and citation impact of a researcher. Given an array of integers, `citations`, where `citations[i]` represents the number of citations received for the researcher’s `i - th paper`, the goal is to calculate the researcher's H-Index.

The H-Index is defined as the maximum value of `h` such that the researcher has published at least `h` papers that have each been cited at least `h` times.

**Input:** `citations = [3,0,6,1,5]`  

**Output:** `3`  

**Explanation:** `[3,0,6,1,5]` means the researcher has 5 papers in total and each of them had received `3, 0, 6, 1, 5` citations respectively.
Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, their h-index is 3.