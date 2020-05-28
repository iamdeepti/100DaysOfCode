#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define f first
#define s second
typedef long long ll;
#define mk make_pair
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<vector<char>> a(n);
        for(int i=0;i<n;i++)
        {
            a[i].resize(m);
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        }
        ll cost=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]=='.'&& j+1<m && 2*x>y && a[i][j+1]=='.')
                {
                    // cout<<"here"<<endl;
                    cost += y;
                    j++;
                }
                else if(a[i][j]=='.'){
                    cost += x;
                    // cout<<"here2"<<endl;
                }
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}