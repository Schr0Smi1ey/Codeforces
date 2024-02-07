#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n;cin>>n;int arr[n];
    int step = 2e9;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>0)
        {
            step = min(step,arr[i]-arr[i-1]);
        }
    }
    cout<<max(0LL,(step+2)/2)<<endl;
}
signed main()
{
    fastio;
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
// #define endl "\n"
// #define int long long int
// void solution()
// {
//     int n;cin>>n;int arr[n];
//     int step = 2e9;
//     bool flag = false;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         if(i>0)
//         {
//             step = min(step,(arr[i]-arr[i-1]+2)/2);
//         }
//     }
//     cout<<max(0LL,step)<<endl;
// }
// signed main()
// {
//     fastio;
//     int t;cin>>t;
//     while(t--)
//     {
//         solution();
//     }
//     return 0;
// }