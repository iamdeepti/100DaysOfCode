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
string bin(ll n)
{
    string a;
    while(n>0)
    {
        ll curr = n%2;
        a.pb(curr+'0');
        n = n/2;
    }
    reverse(a.begin(),a.end());
    return a;
}
ll dec(string a)
{
    ll n=0,i=a.length()-1;
    ll k = 0;
    while(i>=0)
    {
        n += (a[i]-'0')*(1<<k);
        i--;
        k++;
    }
    return n;
}
ll concat(string a,string b)
{
    // cout<<a<<" "<<b<<endl;
    string ab = a+b;
    string ba = b+a;
    // cout<<ab<<" "<<ba<<endl;
    
    return dec(ab)-dec(ba);
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    // sort(a.begin(),a.end());
    vector<string> b(n);
    for(ll i=0;i<n;i++)
    {    b[i] =(bin(a[i]));
        // cout<<b[i]<<" ";
    }
    ll ans = -1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
                ans = max(ans,concat(b[i],b[j]));
        }
    }
    cout<<ans<<endl;
}
int main()
{
    // ios_base:: sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    // cout<<bin(12)<<endl;
    // cout<<dec("10011")<<endl;
    return 0;
}
// #include <bits/stdc++.h>
// #define int long long int
// #define endl "\n"
// #define mod 1000000007
// #define ps(x,noOfDecimal) fixed<<setprecision(noOfDecimal)<<x

// using namespace std;
// void decBinary(int arr[], int n)
// {
// 	int k = log2(n);
// 	while (n > 0) {
// 		arr[k--] = n % 2;
// 		n /= 2;
// 	}
// }

// // Funtion to convert the number
// // represented as a binary array
// // arr[] into its decimal equivalent
// int binaryDec(int arr[], int n)
// {
// 	int ans = 0;
// 	for (int i = 0; i < n; i++)
// 		ans += arr[i] << (n - i - 1);
// 	return ans;
// }

// // Function to concatenate the binary
// // numbers and return the decimal result
// int concat(int m, int n)
// {

// 	// Number of bits in both the numbers
// 	int k = log2(m) + 1;
// 	int l = log2(n) + 1;

// 	// Convert the bits in both the integers
// 	// to the arrays a[] and b[]
// 	int a[k] = { 0 }, b[l] = { 0 };

// 	// c[] will be the binary array
// 	// for the result
// 	int c[k + l] = { 0 };
// 	decBinary(a, m);
// 	decBinary(b, n);

// 	// Update the c[] array
// 	int in = 0;
// 	for (int i = 0; i < k; i++)
// 		c[in++] = a[i];
// 	for (int i = 0; i < l; i++)
// 		c[in++] = b[i];

// 	// Return the decimal equivalent
// 	// of the result
// 	return (binaryDec(c, k + l));
// }

// signed main()
// {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// 	std::ios::sync_with_stdio(false);
// 	cin.tie(); cout.tie();
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 		int n;
// 		cin >> n;
// 		vector<int> arr(n);
// 		for (int i = 0; i < n; i++) {
// 			cin >> arr[i];
// 		}
// 		int mx = -1;
// 		for (int i = 0; i < n; i++) {
// 			for (int j = 0; j < n; j++) {
// 				if (i != j) {
// 					int val1 = concat(arr[i], arr[j]);
// 					int val2 = concat(arr[j], arr[i]);
// 					mx = max(mx, val1 - val2);
// 				}
// 			}
// 		}
// 		cout << mx << endl;
// 	}
// 	return 0;
// }
