#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    int q;
    cin>>q;
    while(q--)
    {
        for(int i=0;i<3;i++)
            cin>>a[i];
        sort(a,a+3);
        if(a[0]<a[2])
            a[0]++;
        if(a[2]>a[0])
            a[2]--;
        cout<<2*abs(a[2]-a[0])<<endl;
    }
    return 0;
}