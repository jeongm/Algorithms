Reverse order of given Linked List, but recursively.
# Concept
Separate linked list to two parts
1. reversed linked list
2. what is remaining of the original linked list

```
public Node reverseLL(Node reverseHead, Node originalHead)
    if originalHead.next == null
        return reverseHead
    else
        Node temp = originalHead.next
        originalHead.next = reverseHead
        reverseHead = originalHead
        originalHead = temp
        reverseLL(reverseHead, originalHead)
```

# Diagram
![Diagram](https://raw.githubusercontent.com/jeongm/Algorithms/master/247R/recursion/3.%20Reverse%20Linked%20List/reverseLLRecurse.png)
