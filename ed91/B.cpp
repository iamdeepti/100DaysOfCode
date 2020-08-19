#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
// #define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define vi vector<int>
void solve()
{
    string str;   cin>>str;
    int n = str.length();
    int r=0,s=0,p=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='R')   r++;
        if(str[i]=='S')   s++;
        if(str[i]=='P')   p++;
    }
    if(r>s && r>p)
    {
        for(int i=0;i<n;i++)
            cout<<"P";
        cout<<endl;
        return;
    }
    if(s>r && s>p)
    {
        for(int i=0;i<n;i++)
            cout<<"R";
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++)
            cout<<"S";
        cout<<endl;
        
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
