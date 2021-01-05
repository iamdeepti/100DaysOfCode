#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    int n, q; cin>>n>>q;
    string str; cin>>str;
    while(q--)
    {
        int l,r;    cin>>l>>r;
        l--; r--;
        int i=0, j= n-1;;
        while(i<l)
        {
            if(str[i]==str[l])
                break;
            i++;
        }
        while(j>r)
        {
            if(str[j]==str[r])
            {
                break;
            }
            j--;
        }
        if(i!=l || j!=r)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
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
