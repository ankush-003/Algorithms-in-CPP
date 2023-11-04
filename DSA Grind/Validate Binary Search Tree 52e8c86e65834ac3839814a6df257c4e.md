# Validate Binary Search Tree

Tags: Binary Search Tree, Binary Tree, DFS, Tree
Date: October 28, 2023
Level: Medium
Number: 47
Platform: Leetcode
URL: https://leetcode.com/problems/validate-binary-search-tree/

Given the `root` of a binary tree, *determine if it is a valid binary search tree (BST)*.

A **valid BST** is defined as follows:

- The left  of a node contains only nodes with keys **less than** the node's key.
    
    subtree
    
- The right subtree of a node contains only nodes with keys **greater than** the node's key.
- Both the left and right subtrees must also be binary search trees.

**Example 1:**

![https://assets.leetcode.com/uploads/2020/12/01/tree1.jpg](https://assets.leetcode.com/uploads/2020/12/01/tree1.jpg)

```
Input: root = [2,1,3]
Output: true

```

**Example 2:**

![https://assets.leetcode.com/uploads/2020/12/01/tree2.jpg](https://assets.leetcode.com/uploads/2020/12/01/tree2.jpg)

```
Input: root = [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.

```

**Constraints:**

- The number of nodes in the tree is in the range `[1, 104]`.
- `231 <= Node.val <= 231 - 1`

## Solution

```python
class Solution {
public:
    bool isValid(TreeNode* root, TreeNode* lower, TreeNode* upper) {
        if(!root) return true;
        if(lower && root->val <= lower->val) {
            return false;
        }
        if(upper && root->val >= upper->val) {
            return false;
        }
        return isValid(root->right, root, upper) && isValid(root->left, lower, root); 
    }
    bool isValidBST(TreeNode* root) {
        return isValid(root, NULL, NULL); 
    }
};
```

[https://www.youtube.com/watch?v=s6ATEkipzow](https://www.youtube.com/watch?v=s6ATEkipzow)