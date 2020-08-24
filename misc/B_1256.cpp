#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define mp make_pair
#define pb push_back
bool comp(pair<int,int> a, pair<int,int> b)
{
    return a.f < b.f ;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int x;
        int * a = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int s  = 0;
        int i=0;
        while(s<n)
        {
            int k = min_element(a+s,a+n)-a;
            if(k==s)
            {    s = k+1;
                continue;
            }
            for(int j=max(k-1,s);j>=s;j--)
            {   
                if(j+1 < n)
                swap(a[j+1],a[j]);
            }
            // cout<<i<<" "<<s<<" "<<k<<endl;
            // for(int i=0;i<n;i++)
            //     cout<<a[i]<<" ";
            // cout<<endl;
            //i = k;
            s = k;
        }
        //cout<<endl;
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        delete[] a;
    }
    return 0;
}