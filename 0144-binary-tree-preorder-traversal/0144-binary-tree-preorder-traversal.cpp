/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        if(root==NULL) return {};
        st.push(root);
        // TreeNode* left = root->left;
        // TreeNode* left = root->right;
        vector<int> ans;
        while(!st.empty()){
            TreeNode* tos = st.top();
            ans.push_back(tos->val);
            st.pop();
            if(tos->right!=NULL)st.push(tos->right);
            if(tos->left!=NULL)st.push(tos->left);
            
        }
        return ans;
    }
};