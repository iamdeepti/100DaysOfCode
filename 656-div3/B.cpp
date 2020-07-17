#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(2*n);
        vector<bool> vis(n+1,false);
        for(int i=0;i<2*n;i++)
        {    cin>>a[i];
            if(!vis[a[i]])
                cout<<a[i]<<" ";
            vis[a[i]]=true;
        }
        cout<<endl;
    }
    return 0;
}
