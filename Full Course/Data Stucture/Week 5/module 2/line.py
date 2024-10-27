

class Node:
    def __init__(self,val):
        self.val = val
        self.next = None
        
def insert_at_tail(head,v):
    newnode = Node(v)
    if head is None:
        head = newnode
        return head

    tmp = None
    while tmp.next is None:
        tmp = tmp.next
    tmp.next = newnode
    return head
    
    
def print_linked_list(head):
    
    tmp = head
    while tmp is not None:
        print(tmp.val,end=" ")
        tmp = tmp.next
        
    return head
    
            
    
    
            
 
        
values = input("Enter your values: ").split()
head = None
tail = None
for value in values:
    newnode = Node(int(value))
    if head is None:
        head = newnode
    else:
        tail.next = newnode
    tail = newnode
print_linked_list(head)
        
    
    
    