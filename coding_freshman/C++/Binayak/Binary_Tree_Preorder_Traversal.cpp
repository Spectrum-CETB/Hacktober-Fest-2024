#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Solution class containing preorder traversal logic
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preorderHelper(root, result);
        return result;
    }

private:
    void preorderHelper(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {
            return;
        }
        result.push_back(node->val);          // Visit root
        preorderHelper(node->left, result);   // Visit left subtree
        preorderHelper(node->right, result);  // Visit right subtree
    }
};

// Function to insert nodes in the binary tree level by level (BFS)
TreeNode* insertLevelOrder(const vector<int>& nodes, int i) {
    if (i >= nodes.size() || nodes[i] == -1) {
        return nullptr;  // Using -1 to represent null nodes
    }
    
    TreeNode* root = new TreeNode(nodes[i]);
    root->left = insertLevelOrder(nodes, 2 * i + 1);
    root->right = insertLevelOrder(nodes, 2 * i + 2);
    return root;
}

int main() {
    Solution solution;

    // Taking input from the user for the binary tree
    cout << "Enter the number of nodes: ";
    int n;
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the values of the nodes in level-order (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    // Construct the binary tree from user input
    TreeNode* root = insertLevelOrder(nodes, 0);

    // Perform preorder traversal and print the result
    vector<int> result = solution.preorderTraversal(root);
    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
