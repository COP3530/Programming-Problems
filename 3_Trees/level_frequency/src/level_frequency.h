#include <iostream>
#include <queue>

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// This will be called in main to construct the tree
TreeNode *insert(std::vector<int> nodes)
{
    TreeNode *root = new TreeNode(nodes[0]);
    std::queue<std::pair<TreeNode *, int>> q;

    q.push(std::pair<TreeNode *, int>(root, 0));

    while (!q.empty())
    {
        TreeNode *node = q.front().first;
        int index = q.front().second;

        q.pop();

        int leftIndex = index * 2 + 1;
        int rightIndex = index * 2 + 2;

        if (leftIndex < nodes.size() && nodes[leftIndex] != INT_MIN)
        {
            TreeNode *leftChild = new TreeNode(nodes[leftIndex]);
            node->left = leftChild;
            q.push(std::pair<TreeNode *, int>(leftChild, leftIndex));
        }

        if (rightIndex < nodes.size() && nodes[rightIndex] != INT_MIN)
        {
            TreeNode *rightChild = new TreeNode(nodes[rightIndex]);
            node->right = rightChild;
            q.push(std::pair<TreeNode *, int>(rightChild, rightIndex));
        }
    }
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

int levelFreq(TreeNode* root, int k){
    //Your code here :) 
    return 0;
}