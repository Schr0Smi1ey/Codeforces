#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
 
map<int,int> mp;
int get(int x,int y)
{
    int D = (x*x) - (4*y);
    if(D < 0) return 0;
 
    int sq_det = sqrt(D);
    int x1 = (x+ sq_det)/2;
    int x2 = (x-sq_det)/2;
    if((x1+x2)!=x || (x1*x2) != y) return 0;
    if(x1 == x2)
    return (mp[x1]*(mp[x2]-1))/2;
    return mp[x1]*mp[x2] ;
 
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        int n , p; cin >> n;
        mp.clear();
        for(int i = 0;i<n;i++)
        {
            cin >> p ;
            mp[p]++;
        }
        int q;cin >> q;
        while(q--) 
        {
            int x,y; cin >> x >> y;
            cout << get(x,y) << " ";
        }
        cout << endl;
    }
}



// #include<bits/stdc++.h>
// using namespace std;
// #define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
// #define endl "\n"
// #define int long long int
// int my_sqrt(int d)
// {
//     int low = 0,high = 2e9 + 5;
//     while(high - low > 1)
//     {
//         int mid = low + (high - low)/2;
//         if(mid*mid > d)
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid;
//         }
//     }
//     return low;
// }
// void solution()
// {
//     int n ; cin >> n;
//     int arr[n];
//     unordered_map<int,int> mp;
//     for(int i = 0;i<n;i++)
//     {
//         cin >> arr[i];
//         mp[arr[i]]++;
//     }
//     int q;cin >> q;
//     while(q--) 
//     {
//         bool flag = true;
//         int x,y; cin >> x >> y;
//         // int loop = lower_bound(arr,arr+n,x/2) - arr;
//         // for(int i=0;i<n;i++) // 2nd loop
//         // {

//         /*
//             fixing the internal LOOP :  using the quadratic formula to find potential values of x1 and x2 based on the given x and y. Then, 
//             checking if these values satisfy the given conditions and using the map mp to count the occurrences of the solutions.
//         */
//         int D = (x*x) - (4*y);
//         if(D < 0)
//         {
//             cout << 0 << " ";
//             continue;
//         }
//         else 
//         {
//             int x1 = (x+my_sqrt(D))/2;
//             int x2 = (x-my_sqrt(D))/2;
//             if((x1+x2)!=x || (x1*x2) != y)
//             {
//                 cout << 0 << " ";
//                 continue;
//             }
//             else 
//             {
//                 if(x1 == x2)
//                 {
//                     cout << (mp[x1]*(mp[x2]-1))/2 << " ";
//                     continue;
//                 }
//                 else
//                 {
//                     cout << mp[x1]*mp[x2] << " ";
//                     continue;
//                 }
//             }
//         }
//         // if(mp.count(x-arr[i]))
//         // {
//         //     if((arr[i] * (x-arr[i])) == y)
//         //     {
//         //         if(arr[i] == (x-arr[i]))
//         //         {
//         //             flag = false;
//         //             cout <<  << " ";
//         //             break;
//         //         }
//         //         else
//         //         {
//         //             flag = false;
//         //             cout <<  << " ";
//         //             break;
//         //         }
//         //     }
//         // }
//         // // }
//         // // if(flag)
//         // // cout << 0 << " " ;
//     }
//     cout << endl;
// }
// signed main()
// {
//     fastio;
//     int t;cin >> t;
//     while(t--)
//     {
//         solution();
//     }
// }


#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

map<int,int> mp;
// int my_sqrt(int d)
// {
//     int low = 0,high = 5e9 + 5;
//     while(high - low > 1)
//     {
//         int mid = low + (high - low)/2;
//         if(mid*mid > d)high = mid;
//         else
//         low = mid;
//     }
//     return low;
// }
int get(int x,int y)
{
    
        // int loop = lower_bound(arr,arr+n,x/2) - arr;
        // for(int i=0;i<n;i++) // 2nd loop
        // {

        /*
            fixing the internal LOOP :  using the quadratic formula to find potential values of x1 and x2 based on the given x and y. Then, 
            checking if these values satisfy the given conditions and using the map mp to count the occurrences of the solutions.
        */
    int D = (x*x) - (4*y);
    if(D < 0) return 0;

    int sq_det = sqrt(D);
    int x1 = (x+ sq_det)/2;
    int x2 = (x-sq_det)/2;
    if((x1+x2)!=x || (x1*x2) != y) return 0;
    if(x1 == x2)
    return (mp[x1]*(mp[x2]-1))/2;
    return mp[x1]*mp[x2] ;

}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        int n , p; cin >> n;
        mp.clear();
        for(int i = 0;i<n;i++)
        {
            cin >> p ;
            mp[p]++;
        }
        int q;cin >> q;
        while(q--) 
        {
            int x,y; cin >> x >> y;
            cout << get(x,y) << " ";
        }
        cout << endl;
    }
}