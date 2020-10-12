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
    int n; cin>>n;
    if(n==4 ||n<3)
    {
        cout<<-1<<endl;
        return;
    }
    // int q = (n - (n/3)*3);
    if(n%3 == 0)
    {
        cout<<n/3<<" 0 0"<<endl;
        return;
    }
    if((n-7)%3 == 0)
    {
        cout<<(n-7)/3<<" 0 1 \n";
        return;
    }
    cout<<(n-5)/3<<" 1 0 \n";
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
