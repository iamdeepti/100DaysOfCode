#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
const int N = 8e4+1;
int n;
int inorder[N], preorder[N], postorder[N];
struct tree{
    int data;
    tree *left; 
    tree * right;
    tree(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
map<int,pii> t;
map<int,int> mp;
vector<int> calc;
tree* buildtree(int l, int r,int node)
{
    if(l>r || node>=n || node<0)
        return NULL;
    // cout<<preorder[node]<<"\t";
    if(l==r)
    {
        tree * pt = new tree(inorder[l]);
        return pt;
    }
    tree * pt = new tree(preorder[node]);
    int j = mp[preorder[node]];
    pt->left = buildtree(l,j-1,node+1);
     pt->right = buildtree(j+1,r,node+j-l+1);
    return pt;
}
void print(tree * root)
{
    if(!root)
     { 
         return;
     }
    // cout<<root->data<<" ";
    // cout<<"left subtree \t";
    print(root->left);
    // cout<<"right subtree \t";
    print(root->right);
    calc.pb(root->data);
    
}
void solve()
{
     cin>>n;
    for(int i=0;i<n;i++)
        cin>>preorder[i];
    for(int i=0;i<n;i++)
        cin>>postorder[i];
    for(int i=0;i<n;i++)
    {    cin>>inorder[i];
        mp[inorder[i]] = i;
    }
    tree * root = buildtree(0,n-1,0);
    
    print(root);
    for(int i=0;i<n;i++)
    {
        if(calc[i]!=postorder[i])
        {
            cout<<"no \n";
            return;
        }
    }
    cout<<"yes \n";
}

int32_t main()
{
    // int t;	cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}
