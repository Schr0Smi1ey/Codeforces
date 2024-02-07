#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n;cin >> n;
    int arr[n];
    vector<int> odd ;
    vector<int> even;
    bool same = true;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(i > 0)
        {
            if(arr[i]!=arr[i-1])
            {
                same = false;
            }
        }
    }
    if(same)
    {
        cout << -1 << endl;
        return;
    }
    sort(arr,arr+n);
    int b = 1;
    for(int i= 1;i<n;i++)
    {
        if(arr[i] == arr[0])
        b++;
        else
        break;
    }
    int c = n - b,j = b;
    cout << b << " " << c << endl;
    while(b--)
    {
        cout << arr[0] << " ";
    }
    cout << endl;
    for(int i = j;i< n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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