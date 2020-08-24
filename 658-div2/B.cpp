#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    bool allgone=true;
    int one = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
         {   allgone =false;
            one++;
         }
    }
    if(n==1 || allgone)
    {
        cout<<"First"<<endl;
        return;
    }
    if(one==n)
    {
        if(n&1)
        {
            cout<<"First"<<endl;
        }
        else
            cout<<"Second"<<endl;
        return;
    }
    bool f = true;
    int i=0;
    while(i<n && a[i]==1)
    {
        f = !f;
        i++;
    }
    if(f)
    {
        cout<<"First"<<endl;
        return;
    }
    cout<<"Second"<<endl;
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
