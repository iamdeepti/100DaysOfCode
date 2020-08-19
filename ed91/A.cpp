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
    int n;  cin>>n;
    int k=0;    vi a(n);
    for(int i=0;i<n;i++)
    {    cin>>a[i];
        if(a[i]==i+1)
            k++;
    }
    if(k==n)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        // while(j<n && a[j]<a[i]) j++;
        // while(j<n && )
        if(a[j]>a[i])
        {
            int k=j+1;
            while(k<n && a[k]>a[j]) k++;
            if(k<n)
            {
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;  cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
