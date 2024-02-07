#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int count = 0;
    for(int i=0;i<n;i++)
    {
        int left_ptr = i,right_ptr = i;
        while(right_ptr<n && arr[right_ptr]==arr[left_ptr])
        right_ptr++;
        int L = left_ptr;
        int R = right_ptr -1;
        i = right_ptr-1;
        if((L==0 || arr[L-1]>arr[L]) && (R==n-1 || arr[R]<arr[R+1]))
        count++;
    }
    puts(count==1?"YES":"NO");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}