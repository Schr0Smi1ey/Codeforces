#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int n,t;
    cin>>n>>t;int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ans = 0,sum = 0,right_ptr=0;
    for(int i=0;i<n;i++)
    {
        while(right_ptr<n && sum+arr[right_ptr]<=t)
        {
            sum+=arr[right_ptr];
            right_ptr++;
        }
        ans = max(ans,right_ptr-i);
        sum-=arr[i];
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}


// #include "bits/stdc++.h"

// using namespace std;

// int main() {
//     int n, t;
//     cin >> n >> t;
//     vector<int> a(n);
//     for (int& k : a)
//         cin >> k;

//     int r = 0;
//     int sm = 0;
//     int ans = 0;
//     for (int i = 0; i < n; ++i) {
//         while (r < n && sm + a[r] <= t) {
//             sm += a[r];
//             ++r;
//         }
//         cout<<"r : "<<r<<" "<<sm<<endl;
//         ans = max(ans, r - i);
//         // cout<<"ans : "<<ans<<endl;
//         sm -= a[i];
//         cout<<"sum : "<<sm<<endl;
//     }

//     cout << ans << '\n';

//     return 0;
// }
