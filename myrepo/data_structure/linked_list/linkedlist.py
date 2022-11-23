#!/usr/bin/python3

""" A node of the list """


class node:
    def __init__(self, data = None):
        """ initializing the node object """
        self.data = data
        self.next = None
        
        return self


class linkedlist:
    def __init__(self, data):
        self.head = node(:)
        self.head.data = data




