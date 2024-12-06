## 0x1D. C - Binary trees

A **binary tree** is a hierarchical data structure in which each node has at most two children referred to as left child and right child. It is used in various applications such as efficient searching, and sorting operations. A **Binary Search Tree (BST)** possess all the properties of  binary trees.Data in BST is always stored in such a way, where the left child contains values less than or equal to the node, and the right child contains values greater than the node, enabling efficient search, insertion, and deletion operations. While general binary trees lack order, BSTs provide significant performance improvements with balanced configurations, achieving logarithmic time complexity(0(log2n)) for these operations.

Key properties of binary trees include:
- **depth** distance from the root to a node
- **height** longest path from a node to a leaf 
- **size** total number of nodes

Binary trees can be categorized into types such as:
- **complete** all levels filled except possibly the last 
- **full** each node has 0 or 2 children
- **perfect** all leaf nodes at the same depth
- **balanced** subtrees differ in height by at most one. 

Traversal methods include **depth-first** (preorder, inorder, postorder) and **breadth-first** (level-order), enabling structured data exploration for various use cases.