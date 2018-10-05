Given an integer, return all possible valid combination of parenthesis. 
# concept
1. If input is an odd number, do not return anything. 
2. Use set to rule out any duplicates
3. insert new parenthesis into every possible slot.

# input
`8`, `4`

# output
```
(((())))
((()()))
((())())
((()))()
(()(()))
(()()())
(()())()
(())(())
(())()()
()((()))
()(()())
()(())()
()()(())
()()()()
```

```
(())
()()
```


