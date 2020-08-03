#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr){} ;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){} ;
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){};
                                                                                                                                                                                                   *
};

vector < vector<int> > lvl;
    
    void printCurrentLevel(vector <TreeNode* > level)
    {
        vector<TreeNode* > temp;
        vector<int> t;
        for(int i=0;i<level.size();i++)
        {
            if(level[i]->left != nullptr) {
                //cout<<level[i]->left->val<<" ";
                temp.push_back(level[i]->left);
                t.push_back(level[i]->left->val);
            }
            if(level[i]->right != nullptr) {
                //cout<<level[i]->right->val<<" ";
                temp.push_back(level[i]->right);
                t.push_back(level[i]->right->val);
            }
        }
        //cout<<endl;
        if(t.size()>0)
            lvl.push_back(t);
        if(temp.size() > 0)
            printCurrentLevel(temp);
    }
   
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr)
            return lvl;
        vector <TreeNode* > temp = {root};
        vector <int> t = {root->val};
        lvl.push_back(t);
        printCurrentLevel(temp);
        
        return lvl;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}
