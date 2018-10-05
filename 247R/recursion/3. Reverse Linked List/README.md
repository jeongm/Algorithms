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
        originalHead.next = reverseHead // head of the oLL now points to the head of the rLL
        reverseHead = originalHead // head of the rLL is now the head of the oLL
        originalHead = temp // head of the oLL is the next node of the head of oLL 
        reverseLL(reverseHead, originalHead)
```

# Diagram
![Diagram](https://raw.githubusercontent.com/jeongm/Algorithms/master/247R/recursion/3.%20Reverse%20Linked%20List/reverseLLRecurse.png)
