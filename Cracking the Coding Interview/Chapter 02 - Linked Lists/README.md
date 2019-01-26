# Ch2 Linked List
- Nodes pointing to one next / previous of themselves
- constant remove / insert time at the beginning of the LL 
```
class Node {
  Node next = null;
  int data;

public Node(int d){
  data = d;
}
void appendToTail(int d){
  Node end = new Node(d);
  Node n = this;
  while (n.next !=null){
    n = n.next;
  }
  n.next = end;
  }
}
```
- deleting : just point `this` to `next.next`
  - `this.next = this.next.next`
- Runner techique? 

