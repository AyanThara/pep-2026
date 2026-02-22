class Solution {
public:
    TreeNode* build(vector<int>& inorder, int inL, int inR,
                    vector<int>& postorder, int postL, int postR,
                    unordered_map<int,int>& mp) {
        if(inL > inR || postL > postR) return NULL;
        int rootVal = postorder[postR];     
        TreeNode* root = new TreeNode(rootVal);
        int idx = mp[rootVal];             
        int leftSize = idx - inL;
        root->left = build(inorder, inL, idx-1,
                           postorder, postL, postL+leftSize-1, mp);
        root->right = build(inorder, idx+1, inR,
                            postorder, postL+leftSize, postR-1, mp);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]] = i;
        return build(inorder, 0, inorder.size()-1,
                     postorder, 0, postorder.size()-1, mp);
    }
};
