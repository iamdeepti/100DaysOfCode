#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = (int)1e6+1;
ll A[N];
int main()
{
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        //we just need to satisfy the condition x+y>z
        // now for each value of x between a and b x+y will lie in between
        // x+b and x+c as b and c are limits of y
        // so for each x add 1 in [x+b] and decrement 1 in [x+c+1]
        // memset(A,0,sizeof(A));
        for(int i=a;i<=b;i++)
        {
            A[i+b]++;
            A[i+c+1]--;
        }
        // Now we can iterate from 0 to N and the prefix sum for each i will represent
        // the number of x+y who's sum is equal to i
        for(int i=1;i<N;i++)
        {
            A[i] += A[i-1];
        }
        // Now we'll calculate the prefix sum again, so for each i a[i] will represent
        // number of (x,y) whose sum is less than equal to i
        for(int i=1;i<N;i++)
        {
            A[i] += A[i-1];
        }
        // Now since we need x+y>z so for any z we can calculate pair of (x,y)
        // satisifying the given condition as
        // a[N] - a[z], which means we're subtracting those pairs whose sum is less than 
        // or equal to z (i.e. all pair - pairs where(x+y<=z))
        ll ans = 0;
        for(int i=c;i<=d;i++)
            ans += (A[N-1] - A[i]);
        cout<<ans<<endl;
    
    return 0;
}