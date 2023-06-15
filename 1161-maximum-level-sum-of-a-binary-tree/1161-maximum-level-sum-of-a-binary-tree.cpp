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
    int findTheMax(TreeNode* root){
        
        if(root == NULL){
            return 0;
        }
        
        queue<TreeNode*>q;
        
        q.push(root);
        int ans;
        int maxi = INT_MIN;
        int level = 0;
        while(!q.empty()){
            level++;
            int s = q.size();
            int sum = 0;
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();
                sum+=node->val;
                q.pop();
                if(node->left !=NULL){
                q.push(node->left);  
                }
                if(node->right != NULL){
                    q.push(node->right);
                }
            }
            if(sum > maxi){
                maxi = sum;
                ans = level;
            }
                
                
        }
        
        
        return ans;
        
    }
    
public:
    int maxLevelSum(TreeNode* root) {
        return findTheMax(root);
    }
};