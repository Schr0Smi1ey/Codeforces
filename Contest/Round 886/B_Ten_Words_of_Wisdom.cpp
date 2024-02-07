// #include<bits/stdc++.h>
// using namespace std;
// #define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
// #define endl "\n"
// #define int long long int
// #define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
// #define getbit(n,i) (((n) & (1LL << (i))) !=0)
// void solution()
// {
//     int n;cin>>n;
//     vector<pair<int,int>> v(n);
//     for(int i=0;i<n;i++)
//     {
//         int a,b;
//         cin>>a>>b;
//         v[i]={a,b};
//     }
//     // sort(v.begin(),v.end());
//     int winner,quality = INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         // cout<<v[i].first<<" "<<v[i].second<<endl;
        
//         // if(i==0 && v[i].first<=10)
//         // {
//         //     winner = i;
//         //     quality = v[i].second;
//         // }
//         // else
//         // {
//             if(v[i].first<=10)
//             {
//                 if(v[i].second>quality)
//                 {
//                     cout<<v[i].second<<" "<<quality<<endl;
//                     winner = i+1;
//                     quality = v[i].second;
//                 }
//             }
//         // }
//     }
//     cout<<winner<<endl;
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
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;
    int winner,quality = INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a<=10)
        {
            if(b>quality)
            {
                winner = i;
                quality = b;
            }
        }
    }
    cout<<winner<<endl;
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