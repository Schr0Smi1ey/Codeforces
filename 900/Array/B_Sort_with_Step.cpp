#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
void solution()
{
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    int bad = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] % k != ((i + 1) % k)) // Condition to be good elements
        {
            bad++;
        }
    }
    if(bad == 0)
    cout << 0 << endl;
    else if(bad == 2) // means two elements are in wrong place and they can be swapped
    cout<< 1 <<endl;
    else
    cout<< -1 <<endl;

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