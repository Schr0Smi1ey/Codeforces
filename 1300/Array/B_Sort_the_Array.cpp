#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    if(is_sorted(arr,arr+n))
    {
        cout << "yes" <<" " << endl << 1 << " " << 1 << endl;
        return 0;
    }
    int count = 0 ,left,right;
    for(int i=0;i<n;i++)
    {
        if(i+1<n && arr[i+1] < arr[i])
        {
            left = i;
            right = i+1;
            i++;
            count++;
            while(i+1<n && arr[i+1] < arr[i])
            {
                right++;
                if(i+1<n && arr[i+1] < arr[i])
                i++;
                else
                break;
            }
        }
    }
    if(count == 1)
    {
        reverse(arr+left,arr+right+1);
        if(is_sorted(arr,arr+n))
        cout << "yes" << endl << ++left << " " << ++right ;
        else
        cout << "no";
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}