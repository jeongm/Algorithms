Given a set S with size N, find all elements of the powerset of S.

# concept
1. The number of element of P(S) is 2 ** N
2. Utilize backtracking
  - include current element into subset 
    - move to next index
  - not include current element into subset
    - move to next index

# input
```
5
1 2 3 4 5
```

# output
```
1 2 3 4 5 
1 2 3 4 
1 2 3 5 
1 2 3 
1 2 4 5 
1 2 4 
1 2 5 
1 2 
1 3 4 5 
1 3 4 
1 3 5 
1 3 
1 4 5 
1 4 
1 5 
1 
2 3 4 5 
2 3 4 
2 3 5 
2 3 
2 4 5 
2 4 
2 5 
2 
3 4 5 
3 4 
3 5 
3 
4 5 
4 
5 
  // empty set!
32 // total number of elements of power set
```
