#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<vector<int>> a;
void print()
{
    int n = a.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
void solve()
{
    int n; cin>>n;
    a.clear();
    a.resize(n,vector<int>(n,0));
    // if(n==2)
    // {
    //     print();
    //     return;
    // }
    // if(n&1)
    // {

    // }
    // else{
        int row = 0;
        for(int i=0;i<n;i++)
        {
            a[row][i] = 1;
            a[(row+1)%n][i] = 1;
            row = (row+1)%n;
        }
    // }
    print();
}

int32_t main()
{
    int t;	cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
