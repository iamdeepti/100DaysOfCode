#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define f first
#define s second
void solve()
{
    int n,m;
    cin>>n>>m;
        vector<string> a(n);
        // vector<vector<int>> c(m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i,j,k;
        string str=a[0];
        for(i=0;i<m;i++)
        {
            char save =str[i];
            for(int ch='a';ch<='z';ch++)
            {   
                str[i] = ch;
                // int diff =0;
                // int j,k;
                for(j=0;j<n;j++)
                {
                    int diff=0;
                    for(k=0;k<m;k++)
                    {
                        if(str[k]==a[j][k])
                            continue;
                        else if(diff==0)
                            diff++;
                        else
                            break;
                    }
                    if(k<m)
                        break;
                }
                if(j==n)
                {    cout<<str<<endl;
                    return;
                }
            }
            str[i] = save;

        }
        cout<<"-1"<<endl;
        return;
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