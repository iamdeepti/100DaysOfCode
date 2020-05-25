#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define f first
#define s second
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string> a(n);
        vector<vector<int>> c(m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            // c[i].resize(26);
        }
        for(int i=0;i<m;i++)
            c[i].resize(26);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                c[j][a[i][j]-'a']++;
            }
        }
        vector<char> ans(m);
        bool f=true;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<26;j++)
            {
                if(c[i][j]==n)
                {
                    // f = true;
                    // s.pb('a'+j);
                    s[i] = 'a'+j;
                    break;
                }
                
            }
            // if(!f)
            // {
            //     break;
            // }
        }
        if(!f)
            cout<<"-1"<<endl;
        else{
            cout<<s<<endl;
        }

    }
    return 0;
}