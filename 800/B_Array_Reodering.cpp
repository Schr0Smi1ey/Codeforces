#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

// custom comparison function
// Concept : GCD of two odd numbers will always be greater than 1
bool cmp(int x , int y)
{
    return (x % 2) < (y % 2); // for sorting the array such that even elements comes first then odd elements
}
void solution()
{
    int n;cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    sort(arr , arr+n , cmp);
    int cnt = 0;
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if(__gcd ( arr[i] , arr[j]*2) > 1)
            cnt++;
        }
    }
    cout << cnt << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}