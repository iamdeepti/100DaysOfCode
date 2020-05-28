#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define f first
#define s second
typedef long long ll;
#define mk make_pair
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,c,t;
        cin>>h>>c>>t;
        // int x=0,tb=0,curr=0;
        
        int t1=0,t2=0;
        if((h+c)%t==0){
            cout<<2<<endl;
        }
        else if((c-t)%(h+c-2*t)==0)
        {
            int x1 = (c-t)/(h+c-2*t);
            cout<<2*x1-1<<endl;
        }
        else{
            int x = (c-t)/(h+c-2*t);
            double ans1 = abs((h*x + c*(x-1))/(double)(2*x-1) -t);
            double ans2 = abs((h*(x+1) + c*(x))/(double)(2*x+1) -t);
            // cout<<ans1<<" "<<ans2<<" "<<x<<endl;
            if(ans1<ans2)
            cout<<2*x-1<<endl;
            else 
            cout<<2*x+1<<endl;
        }
    }
    return 0;
}