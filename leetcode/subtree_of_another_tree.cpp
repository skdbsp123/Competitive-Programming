/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(similar(s, t)){
            return true;
        }
        if(s->left != NULL){
            if(isSubtree(s->left, t)){
                return true;
            }
        }
        if(s->right != NULL){
            if(isSubtree(s->right, t)){
                return true;
            }
        }
        return false;
    }

private:
    bool similar(TreeNode* s, TreeNode* t){
        if(s == NULL && t == NULL){
            return true;
        }
        if(s->val != t->val){
            return false;
        }
        if(!similar(s->left, t->left)){
            return false;
        }
        return similar(s->right, t->right);
    }


};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}