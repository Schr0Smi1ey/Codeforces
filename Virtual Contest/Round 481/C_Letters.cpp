#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n , l ,x;
    cin >> n >> l;
    int arr[n+1],room[l];
    arr[0] = 0;
    for(int i = 1;i<=n;i++)
    {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    for(int i = 0;i<l ;i ++)
    {
        cin >> room[i];
        int dormitory = lower_bound(arr,arr+n,room[i]) - arr;
        int r  = room[i] - arr[dormitory-1] ;
        cout<< dormitory << " " << r<< endl;
    }
    return 0;
}