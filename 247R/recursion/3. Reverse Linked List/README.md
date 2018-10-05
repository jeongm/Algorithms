Reverse order of given Linked List, but recursively.
# Concept
- Assume given only the head of singly Linked List
- Separate linked list to two parts
  1. reversed linked list
  2. what is remaining of the original linked list

```
public Node reverseLL(Node reverseHead, Node originalHead)
    if originalHead.next == null // original Linked List is exhausted
        return reverseHead 
    else
        Node temp = originalHead.next
        originalHead.next = reverseHead // head of the original Linked List now points to the head of the reversed Linked List
        reverseHead = originalHead // head of the reverse Linked List is now the head of the original Linked List
        originalHead = temp // head of the original Linked List is the next node of the head of original Linked List 
        reverseLL(reverseHead, originalHead)
```

# Diagram
![Diagram](https://raw.githubusercontent.com/jeongm/Algorithms/master/247R/recursion/3.%20Reverse%20Linked%20List/reverseLLRecurse.png)
