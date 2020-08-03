#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for (int i = 0; i < n; i++)
#define loop1(n) for (int i = 1; i < n; i++)

int calcDepth(TreeNode *root, int depth)
{
    int d1 = 0, d2 = 0;
    if (root->left != nullptr)
        d1 = calcDepth(root->left, depth + 1);
    if (root->right != nullptr)
        d2 = calcDepth(root->right, depth + 1);

    if (root->left == nullptr && root->right == nullptr)
        return depth;

    return max(d1, d2);
}
int maxDepth(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    int depth = 0;
    int d = calcDepth(root, depth);
    return d + 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
