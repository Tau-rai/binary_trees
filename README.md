# 0x1D. C - Binary trees

This readme file describes the various concepts covered in this repository using the C programming language.

## What is a Binary Tree?

A binary tree is a tree data structure in which each node has at most two children, referred to as the left child and the right child.

## Difference between a Binary Tree and a Binary Search Tree

A binary tree is a tree where each node has at most two children. In contrast, a binary search tree (BST) is a binary tree with the property that the left subtree of a node contains only nodes with keys lesser than the node’s key, and the right subtree of a node contains only nodes with keys greater than the node’s key.

## Time Complexity Compared to Linked Lists

Binary trees have an advantage over linked lists when it comes to searching for an element. The time complexity for searching an element in a binary tree is O(logN), while for a linked list it is O(N).

## Depth, Height, and Size of a Binary Tree

**Depth**: The depth of a particular node in a binary tree is the number of edges from the root node to that node.
**Height**: The height of a binary tree is the total number of edges from the root node to the most distant leaf node.
**Size**: The size of a binary tree is defined as the number of nodes in the given tree.

## Traversal Methods of a Binary Tree

There are several ways to traverse a binary tree:
Inorder Traversal
Preorder Traversal
Postorder Traversal
Level Order Traversal or Breadth First Search (BFS)
Boundary Traversal
Diagonal Traversal

## Types of Binary Trees

**Complete Binary Tree**: A complete binary tree is a binary tree where all levels are filled except the last one
**Full Binary Tree**: A full binary tree is a special type of binary tree in which every parent node/internal node has either two or no children.
**Perfect Binary Tree**: A perfect binary tree is a type of binary tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.
**Balanced Binary Tree**: A balanced binary tree, also known as a height-balanced binary tree, is defined as a binary tree in which the height of the left and right subtree of any node differ by not more than 1.
