class Solution {
public:

    bool isMirror(TreeNode* root1, TreeNode* root2) {

        // Both nodes are NULL
        if (root1 == NULL && root2 == NULL) {
            return true;
        }

        // One node is NULL and the other is not
        if (root1 == NULL || root2 == NULL) {
            return false;
        }

        // Values are different
        if (root1->val != root2->val) {
            return false;
        }

        // Left of root1 must match right of root2
        // Right of root1 must match left of root2
        return isMirror(root1->left, root2->right) &&
               isMirror(root1->right, root2->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        }

        return isMirror(root->left, root->right);
    }
};