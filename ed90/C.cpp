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
    string str; cin>>str;
    int n = str.length();
    ll fin=0,temp=0,res=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='+')
            temp++;
        else
            temp--;
        if(temp<0)
        {    res += (i+1);
        temp=0;
        }
        // fin = max(-1*temp,fin);
    }
    res += n;
    // cout<<fin<<endl;
    // int res=0;
    // for(int i=0;i<=fin;i++)
    // {
    //     int curr=i;
    //     for(int j=0;j<n;j++)
    //     {
    //         res++;
    //         if(str[j]=='+')
    //             curr++;
    //         else
    //             curr--;
    //         if(curr<0)
    //             break;
    //     }
    // }
    cout<<res<<endl;
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
