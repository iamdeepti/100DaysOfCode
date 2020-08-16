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
    string s;
    cin>>s;
    int n =s.length(),k=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='4' || s[i]=='7')
            k++;
    }
    if(k==0)
    {
       cout<<"NO"<<endl;
            return; 
    }
    while(k)
    {
        int x = k%10;
        if(x!=4 && x!=7)
        {
            cout<<"NO"<<endl;
            return;
        }
        k = k/10;
    }
    cout<<"YES"<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}
