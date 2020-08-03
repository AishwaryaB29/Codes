#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

struct TreeNode {
      int val;
      TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
bool isMirror (TreeNode* node1, TreeNode* node2) {
        if(node1 == nullptr && node2 == nullptr)
            return true;
        else if(node1 == nullptr || node2 == nullptr)
            return false;
        
        bool ans = false;
        if(node1->val == node2->val)
            ans = true;
        
        return ans && isMirror(node1->left,node2->right) && isMirror(node2->left,node1->right);
    }
    bool isSymmetric(TreeNode* root) {
        return isMirror(root,root);
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
