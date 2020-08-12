#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set<char> keys;
    char ch;
    for(int i=0;i<k;i++)
    {    
        cin>>ch;
        keys.insert(ch);
    }
    int i=0,l=0,r=-1;
    ll ans = 0;
    while(i<n)
    {
        l = i;
        r = l;
        while(r<n && keys.count(s[r])>0)
            r++;
        if(r!=i)
            i = r;
        else
        {
            i++;
        }
        ans += ((1ll*(r-l))*(r-l+1))/2;
    }
    cout<<ans<<endl;
    return 0;
}