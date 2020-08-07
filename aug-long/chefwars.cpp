#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define vi vector<int>
void solve()
{
    int h,p;
    cin>>h>>p;
    while(p)
    {
        h -= p;
        if(h<=0 && p!=0)
        {
            cout<<1<<endl;
            return;
        }
        p= (p>>1);
    }
    cout<<0<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
