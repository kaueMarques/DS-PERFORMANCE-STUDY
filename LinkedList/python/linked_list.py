#!/usr/bin/env python3
from node import Node

def add_element_at_end_recursion(root:Node, new_elment):
    if root.next is not None:
        add_element_at_end_recursion(root.next, new_elment)
    else:
        root.next = Node(new_elment)

if __name__ == '__main__':
    root = Node(0)    

    for element in range(10):
        add_element_at_end_recursion(root, element+1)
    
    print(root)
