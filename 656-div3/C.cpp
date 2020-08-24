#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        bool inc = true;
        int i;
        for(i=n-1;i>0;i--)
        {
            if(inc)
            {
                if(a[i-1]<a[i])
                    inc=false;
            }
            if(!inc)
            {
                if(a[i-1]>a[i])
                {
                    break;
                }
            }
        }
        cout<<i<<endl;
    }
    return 0;
}
