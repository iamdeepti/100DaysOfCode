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
        int n;
        cin>>n;
        vi a(n);
        int odd = 0;
        for(int i=0;i<n;i++)
        {    cin>>a[i];
            odd += a[i]%2;
        }
        sort(a.begin(),a.end());
        if(odd%2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else{
            int i=0;
            for(i=1;i<n;i++)
            {
                if(a[i]==a[i-1]+1)
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(i==n)
                cout<<"NO"<<endl;
        }
    }
    return 0;
}