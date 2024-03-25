# Recusion
A recursive function unimodal_search_r.

Write a recursive function unimodal search r that satisfies the following specification:

• Function header. int unimodal search r(int A[], int a, int b)

• Pre-condition. A has size n, 0 ≤a < n, 0 ≤b < n and there is some i such that
A[0] < A[1] < ···< A[i −1] < A[i] > A[i + 1] > ···> A[n −1].

• Function body. This should satisfy the following:
unimodal_search_r(A, a, b) = i, where A[i] = max (A[a], . . . , A[b]).

In other words, A consists of values that are strictly increasing up to some index i, and then
strictly decreasing after that. unimodal_search_r(A, a, b) will return i. Note that it could be
that i = 0 or i = n −1. Your
implementation, however should have cost O(log2 n) or O(log3 n).
