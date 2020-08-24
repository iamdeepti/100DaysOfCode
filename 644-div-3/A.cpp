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
        int a,b;
        cin>>a>>b;
        // if(a<b)
        //     a = 2*a;
        // else
        //     b = 2*b;
        // cout<<min(a*a,b*b)<<endl;
        int a1 = max(a*a,4*b*b), a2= max(4*a*a,b*b), a3= (max(max(a,b),(a+b)));
        a3 = a3*a3;
        cout<<min(a1,min(a2,a3))<<endl;
    }
    return 0;
}