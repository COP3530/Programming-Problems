#include <iostream>

class TreeNode
{
public:
    std::string val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(std::string x) : val(x), left(nullptr), right(nullptr) {}
};

// This will be called in main to construct the tree
TreeNode* insert(TreeNode* root, std::string data)
{
    if (root == nullptr)
        return new TreeNode(data);
    if (root->val < data)
        root->right = insert(root->right, data);
    else
        root->left = insert(root->left, data);
    return root;
}

// This will be called in main to deallocate memory
void destruct(TreeNode* root)
{
    if (root->left)
        destruct(root->left);
    if (root->right)
        destruct(root->right);
    delete root;
}

std::string kthSmallest(TreeNode* root, int k){
    //your code here
    return "";
}

