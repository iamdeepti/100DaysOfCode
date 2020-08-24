#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        //vi res;
        for(int i=1;i<=n;i++)
        {
            int count=0;
            int k=0;
            int j = i;
            while(k!=i)
            {
                j = a[j];
                k = j;
                count++;
            }
            cout<<count<<" ";
        }
        cout<<endl;
    }
}