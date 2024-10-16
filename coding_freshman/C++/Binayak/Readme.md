# Binary Tree Preorder Traversal

Given the root of a binary tree, return the preorder traversal of its nodes' values.

Example 1:
Input: root = [1,null,2,3]
Output: [1,2,3]

Example 2:
Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]
Output: [1,2,4,5,6,7,3,8,9]

Example 3:
Input: root = []
Output: []

Example 4:
Input: root = [1]
Output: [1]


Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100


Here’s a complete README file for the given problem:

Binary Tree Preorder Traversal
Given the root of a binary tree, the task is to return the preorder traversal of its nodes' values, where preorder traversal visits the root first, then the left subtree, followed by the right subtree.

# Problem Explanation 🚀
We are provided with a binary tree, and you need to traverse it in a preorder manner. The result should be a list of node values following the order: Root -> Left -> Right.

Example:
Input: [1, null, 2, 3]
Output: [1, 2, 3]


# Logic 🤯
Approach:

We use a recursive approach where we first visit the root, then recursively traverse the left subtree, followed by the right subtree.
Used a helper function to accumulate the result in a vector.
Own Test Cases:

Test Case 1:
Input: root = [1,2,3,null,9,null,null]
Output: [1,2,9,3]

# Code Structure and Libraries Used:

The code is structured using a TreeNode class,struct to represent each node in the tree and a Solution class to perform the traversal.
Standard libraries such as vector are used to store the result, and basic recursion is used for traversal.

# Time Complexity and Space Complexity

Time Complexity -> O(n)
Reason: We visit each node exactly once in the tree.

Space Complexity -> O(n)
Reason: In the worst case, the recursion stack will store all nodes in a linear tree structure
