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
    int maxLevelSum(TreeNode* root) {
        int level = 0;
        int ans = 0;
        int mx = INT_MIN;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            level++;
            int n = q.size();
            int sum = 0;

            while(n--){
                TreeNode* curr = q.front();
                q.pop();
                sum += curr->val;

                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            if(sum>mx){
                    mx = sum;
                    ans = level;
                }
        }
        return ans;
    }
};