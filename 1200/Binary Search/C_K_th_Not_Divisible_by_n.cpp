#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
ll search(int n,int k)
{
    if(n==k)
    return ++n;
    ll low=1,high= 1e18,mid,result;
    while(low<=high)
    {
        mid = low + (high-mid)/2;
        if(mid-(mid/n)>=k)
        {
            result = mid;
            high = mid -1;
        }
        else
        {
            low = mid+1;
        }
    }
    return low;
}
void solution()
{
    ll n,k;
    cin>>n>>k;
    cout<<search(n,k)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}





#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 +5;
typedef pair<int,int> pii;

void solution(){
    int n,k;cin >> n >> k;
    int p = (k/(n-1));
    int ans = p*n;
    cout << ans + (k%(n-1)?k%(n-1):(-1)) << endl;
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}