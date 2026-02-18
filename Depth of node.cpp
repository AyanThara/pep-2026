class Solution{
public:
    int solve(Node* root, int level){
        if(!root) return 0;
        if(!root->left && !root->right){
            if(level % 2 == 1) return level; 
            else return 0;
        }
        return max(solve(root->left, level+1),
                   solve(root->right, level+1));
    }
    int depthOfOddLeaf(Node *root){
        return solve(root, 1);
    }
};
