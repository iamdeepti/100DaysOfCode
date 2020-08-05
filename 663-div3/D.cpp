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
struct comp{
    bool operator() (int a,int b) const{
        return a>b;
    }
};
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<int,comp> zero,one;
    vector<int> ans(n); 
    int prev=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            if(one.size()==0)
            {
                
                ans[i] = prev+1;
                prev++;
                zero.insert(i);
            }
            else{
                int x = *one.begin();
                one.erase(x);
                ans[i] = ans[x];
                zero.insert(i);
            }
        }
        else
        {
            if(zero.size()==0)
            {
                
                ans[i] = prev+1;
                prev++;
                one.insert(i);
            }
            else{
                int x = *zero.begin();
                zero.erase(x);
                ans[i] = ans[x];
                one.insert(i);
            }
        }
    }
    cout<<prev<<endl;
    for(auto x:ans)
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
