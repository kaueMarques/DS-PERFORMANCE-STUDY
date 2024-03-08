#!/usr/bin/env python3
from node import Node

def add_element_at_end_recursion(node: Node, new_element):
    if node.next is not None:
        add_element_at_end_recursion(node.next, new_element)
    else:
        node.next = Node(new_element)

def remove_last_node(node: Node):
    if node.next is None or node.next.next is None:
        node.next = None
        return
    remove_last_node(node.next)

def get_last_node(root: Node):
    return root.next.data

def filo_operation(root:Node):
    """FILO - First IN, Last OUT"""
    data = get_last_node(root)
    remove_last_node(root)
    return data

def fifo_operation(node:Node):
    """FIFO - First In, First Out"""
    data = node.next.data
    node.next = node.next.next
    return data

if __name__ == '__main__':
    root = Node('Linked List')
    for element in range(10):
        add_element_at_end_recursion(root, element+1)

    for i in range(3):
        fifo_operation(root)

    output = str(root)\
        .replace('(','')\
        .replace(')','')\
        .replace("next =", '')\
        .replace(",  None",'')\
        .replace("content = Linked List,",'')\
        + "\n"
    
    print(output)