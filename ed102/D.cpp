// Author - Deepti Singh
// Created: 24 Jan 21, Sunday   01:30:44 pm
// Last modified: 24 Jan 21, Sunday   08:25:41 pm
// Institution - DTU
// email - iamdeepti956@gmail.com
#include <bits/stdc++.h>
using namespace std;
 
#define int             long long int
#define ff              first
#define ss              second
#define pb              push_back
 
#define vi              vector <int>
#define pii             pair <int, int>
 
#define loop(i,s,e)     for(int i=s;i<e;i++)
#define rloop(i,e,s)    for(int i=e;i>=s;i--)
#define mset(a,f)       memset(a,f,sizeof(a))
 
#define endl            "\n"
#define sz(x)           ((int) x.size())
#define all(p)          p.begin(), p.end()
#define print(a)		for(auto x:a) cout<<x<<" ";	cout<<endl
#define Print(a,s,e)	for(int i=s; i<e; i++) cout<<a[i]<<" ";	  cout<<endl 
#define bug(...)        __f (#__VA_ARGS__, __VA_ARGS__)
 

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
int n,m;
string s;
struct TreeNode{
    int minm, maxm,curr;
    TreeNode()
    {
        minm = maxm = curr=0;
    }
    TreeNode(int a,int b,int c)
    {
        minm = a; maxm = b; curr = c;
    }
};
inline TreeNode add(TreeNode a,TreeNode b)
{
    return TreeNode(min(a.minm,b.minm+a.curr),max(a.maxm,b.maxm+a.curr),(a.curr+b.curr));
}
void buildtree(TreeNode * Tree, int l, int r, int node)
{
    if(l>r) return;
    if(l==r)
    {
        int k= (s[l]=='-')?-1:1;
        Tree[node] = TreeNode(min(1ll*0,k),max(1ll*0,k),k);
        return ;
    }
    int mid = l + (r-l)/2;
    buildtree(Tree,l,mid,2*node+1); buildtree(Tree,mid+1,r,2*node+2);
    TreeNode left = Tree[2*node+1], right = Tree[2*node+2];
    Tree[node] = add(left,right);
}
TreeNode query(TreeNode * Tree, int l,int r, int node, int ql,int qr)
{
    TreeNode t;
    if(l>r)
        return t;
    if(ql<=l && qr>=r)
        return t;
    if(ql>r || qr<l)
        return Tree[node];
    int mid = l + (r-l)/2;
    TreeNode left = query(Tree,l,mid,2*node+1,ql,qr);
    TreeNode right = query(Tree,mid+1,r,2*node+2,ql,qr);
    return add(left,right);
}
void solve()
{
    cin>>n>>m>>s;
    TreeNode *Tree =  new TreeNode[4*n];
    buildtree(Tree,0,n-1,0);
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        TreeNode ans = query(Tree,0,n-1,0,l-1,r-1);
        cout<<ans.maxm-ans.minm+1<<endl;
    }
    delete[] Tree;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}