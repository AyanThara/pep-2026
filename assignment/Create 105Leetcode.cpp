class Solution {
public:
    TreeNode* build(vector<int>& preorder, int preStart, int preEnd,
                    vector<int>& inorder, int inStart, int inEnd,
                    unordered_map<int,int>& mp) {
        if(preStart > preEnd || inStart > inEnd) return NULL;
        int rootVal = preorder[preStart];
        TreeNode* root = new TreeNode(rootVal);
        int inRoot = mp[rootVal];            
        int leftSize = inRoot - inStart;      
        root->left = build(preorder, preStart+1, preStart+leftSize,
                           inorder, inStart, inRoot-1, mp);
        root->right = build(preorder, preStart+leftSize+1, preEnd,
                            inorder, inRoot+1, inEnd, mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]] = i;
        return build(preorder, 0, preorder.size()-1,
                     inorder, 0, inorder.size()-1, mp);
    }
};
