#!/usr/bin/env python3
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.index = 0

        
    def __str__(self):
        return f'\n(content = {self.data}, next = {self.next})'