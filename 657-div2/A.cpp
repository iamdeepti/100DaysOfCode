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
    string str; cin>>str;
    string a = "abacaba";

    int j=0,i=0,k=0;
    for(i=0;i<n;i++)
    {
        j=i;
        while((j-i)<=6 && (str[j]==a[j-i]))
            j++;
        if(j-i==7)
        {
            // cout<<"YES"<<endl;
            // for(int k=i;k<=i+7;k++)
            //     str[k] = a[k-i];
            // cout<<str<<endl;
            // return;
            k++;
        }
    }
    // cout<<k<<endl;
    if(k>1)
    cout<<"NO"<<endl;
    else if(k==1)
    {
        for(int i=0;i<n;i++)
        {
            if(str[i]=='?')
                str[i]='e';
        }
        cout<<"YES"<<endl;
        cout<<str<<endl;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            j=i;
            while((j-i)<=6 && (str[j]==a[j-i] || str[j]=='?'))
                j++;
            if(j-i==7)
            {
                string temp = str;
                // cout<<str<<"-->";
                for(int k=i;k<=i+6;k++)
                    str[k] = a[k-i];
                int cnt=0;
                // cout<<str<<"-->";
                for(int l=0;l<n;l++)
                {
                    int p=l;
                    while((p-l)<=6 && (str[p]==a[p-l]))
                        p++;
                    if(p-l==7)
                    {
                        cnt++;
                    }
                }
                if(cnt==1)
                {
                    cout<<"YES"<<endl;
                    for(int l=0;l<n;l++)
                    {
                        if(str[l]=='?') str[l]='e';
                    }
                    cout<<str<<endl;
                    return;
                }
                
                str = temp;
                // cout<<str<<"-->";
            }
        }
        cout<<"NO"<<endl;
    }
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
