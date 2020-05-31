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
        int n,k;
        cin>>n>>k;
        if(k>=n)
            cout<<1<<endl;
        else{
            int i;
            for(i=1;i<=sqrt(n);i++)
            {
                if(n%i==0 && k>= (n/i))
                    break;
            }
            if(i<= sqrt(n))
            cout<<i<<endl;
            else{
                for(i=sqrt(n);i>=1;i--)
                {
                    if(n%i==0 && k>=i)
                        break;
                }
                cout<<n/i<<endl;
            }
        }
    }
    return 0;
}