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
    string a,b;
    cin>>a>>b;
    int i=n-1;
    vector<int> temp;
    while(i>=0)
    {
        // cout<<i<<endl;
        if(a[i]==b[i])
            i--;
        else if(a[0]==a[i])
        {  
            for(int j=0;j<=i;j++)
                a[j] =((a[j]=='1')?'0':'1');
            temp.pb(i+1);
            reverse(a.begin(),a.begin()+i+1);
            i--;
            // cout<<"cond 1:";;
        }
        else{
            a[0] = a[i];
            temp.pb(1);
            // cout<<"cond 2:";
        }
        // cout<<a<<endl;
    }
    cout<<temp.size()<<" ";
    // reverse(temp.begin(),temp.end());
    for(auto x:temp)
        cout<<x<<" ";
    cout<<endl;
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
