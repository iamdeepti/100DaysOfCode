#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    string a;
    cin>>a;
    int st; cin>>st;
    int n = a.length(),i,curr=0;
    for(i=0;i<n;i++)
    {
        curr += a[i]-'0';
        if(curr>st)
            break;
    }
    if(i==n)
    {
        cout<<0<<endl;
        return;
    }
    while(i>=0 && (curr-(a[i]-'0'))==st){
        curr -= (a[i]-'0');
        i--;
    }
    // cout<<i<<endl;
    // if(curr-(a[i]-'0')<st)
    //     i++;
    //  cout<<i<<endl;
    string temp;
    int j=n-1;
    while(j>=i && a[j]=='0'){
        j--;
        temp.pb('0');
    }
    temp.pb('0'+(10-(a[j]-'0')));
    for(int k = j-1;k>=i;k--)
    {
        temp.pb((9-(a[k]-'0'))+'0');
    }
    int k = temp.length();
    while(k>=0 && temp[k-1]=='0'){
        k--;
        temp.pop_back();
    }
    reverse(temp.begin(),temp.end());
    
    cout<<temp<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
