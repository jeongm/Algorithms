Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in place

# concept
assuming all elements of the matrix is 0 or positive integer, use placeholders -1 and -2.
- mark -1 for 0s while recording input matrix
- iterate through each element of matrix, if the element at index is -1, set every element at that row and column to -2.
  - do not change the -1 value.
- when iteration is over, iterate again through the whole 2d array, and if the value at that index is negative, print 0.

# input
```
5 4
0 4 0 8
1 2 3 5
0 2 7 9
2 8 8 4
2 8 8 0
```
# output
```
0 0 0 0
0 2 0 0
0 0 0 0
0 8 0 0 
0 0 0 0
```
