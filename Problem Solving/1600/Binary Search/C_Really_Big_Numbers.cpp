#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
bool valid(int n,int s){
    int temp = n,sum = 0;
    while(temp){
        sum += temp%10;
        temp/=10;
    }
    return (n - sum) >= s;
}
int search(int n,int s){
    int low = 0,high = n,ans = 0;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(valid(mid,s)){
            ans = n - mid + 1;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
signed main()
{
    fastio;
    int n,s;cin >> n >> s;
    cout << search(n,s);
    return 0;
}