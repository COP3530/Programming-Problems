/*
  Sum of a Level

  Given the root node of an non-empty Binary Search Tree 
	and a certain level, L, write a function that returns the
	sum of all the TreeNode values at level L. If there are
	no nodes at level L, return -1. Assume the levels to start 
	at 0, i.e. the root node is located at level 0.

    Sample Input:
      1
      2 1 3 4
      0
    
    Sample Output:
      2
		
	Explanation:

	Input: Line 1 denotes the number of elements to be inserted 
	into the tree. Line 2 denotes the elements inserted in that 
	order in a BST. Line 3 denotes the Level, L.
	
	Output: The sum of all nodes at the level, L.
*/

#include <iostream>
#include <queue>

 class TreeNode 
 {
     public:
       int val;
       TreeNode *left;
       TreeNode *right;
       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 };

TreeNode* insert(TreeNode* root, int data) 
{
      if (root == nullptr)
        return new TreeNode(data);
      if (root->val < data)
        root->right = insert(root->right, data);
      else 
        root->left = insert(root->left, data);
      return root;
}

int sumOfLevel(TreeNode* root, int level) 
{
	  //code here
    return 0;
}
