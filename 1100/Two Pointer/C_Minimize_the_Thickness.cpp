// #include<bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define ll long long int
// void solution()
// {
//     int n;cin>>n;int arr[n];
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     int left_ptr=1,right_ptr=n-2,sum1=arr[0],sum2=arr[n-1];
//     bool flag = true;
//     while(left_ptr<=right_ptr)
//     {
//         if(sum1==sum2 && sum1!=0 && sum2!=0)
//         {
//             while(sum1==sum2 && left_ptr<=right_ptr)
//             {
//                 if(sum1+arr[left_ptr+1]==sum2+arr[right_ptr-1])
//                 {
//                     right_ptr--;left_ptr++;
//                 }
//                 else break;
//                 sum2+=arr[right_ptr];
//                 sum1+=arr[left_ptr];
//             }
//             flag = false;
//             break;
//         }
//         if(sum1>sum2)
//         {
//             sum2+=arr[right_ptr];
//             right_ptr--;
//         }
//         else
//         {
//             sum1+=arr[left_ptr];
//             left_ptr++;
//         }
//     }
//     sum2 = 0;
//     // cout<<"left ; "<<left_ptr<<" "<<right_ptr<<endl;
//     int count = max(left_ptr-0,n-1-right_ptr);
//     int temp = 0;
//     while(left_ptr<=right_ptr)
//     {
//         sum2+= arr[right_ptr];
//         temp++;
//         if(sum2==sum1)
//         {
//             sum2 = 0;
//             temp = 0;
//             count = max(count,temp);
//         }
//         right_ptr--;
//     }
//     if(flag)
//     cout<<n<<endl;
//     else
//     cout<<count<<endl;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int t;cin>>t;
//     while(t--)
//     {
//         solution();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define ll long long int
// void solution()
// {
//     int n;cin>>n;int arr[n+1];
//     for(int i=1;i<=n;i++)
//     cin>>arr[i];
//     int prefix_sum[n+1];
//     prefix_sum[0]=0;
//     for(int i=1;i<=n;i++)
//     prefix_sum[i]=prefix_sum[i-1]+arr[i];
//     // for(auto x: prefix_sum)
//     // cout<<x<<" ";
//     // cout<<endl;
//     int ans = n;
//     for(int i=1;i<=n;i++)
//     {
//         int max_length = i;
//         bool flag = false;
//         for(int L=i+1;L<=n;)
//         {
//             int R=L;
//             int temp = 0;
//             while(R<=n && temp<prefix_sum[i])
//             {
//                 temp+=arr[R];
//                 R++;
//             }
//             // cout<<"i : "<<i<<" "<<temp<<"R : "<<R<<"P : "<<prefix_sum[i]<<endl;
//             if(temp==prefix_sum[i])
//             {
//                 max_length = max(max_length,R-L);
//                 L=R;
//                 // cout<<"i : "<<i<<" "<<max_length<<endl;
//             }
//             else
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if(!flag)
//         {
//             ans = min(ans,max_length);
//         }
//         // cout<<"i : "<<i<<" "<<ans<<endl;
//     }
//     cout<<ans<<endl;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int t;cin>>t;while(t--)
//     {
//         solution();
//     }
// }

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int n;cin>>n;int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int prefix_sum[n+1];
    prefix_sum[0]=0;
    for(int i=1;i<=n;i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }
    int ans = n;
    for(int i=1;i<=n;i++)
    {
        int max_len = i;
        bool flag = true;
        for(int L=i+1;L<=n;)
        {
            int R=L;
            int temp = 0;
            while(R<=n && temp<prefix_sum[i])
            {
                temp+=arr[R];
                R++;
            }
            if(temp==prefix_sum[i])
            {
                max_len = max(max_len,R-L);
                L=R;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if(flag)
        ans = min(ans,max_len);
    }
    cout<<ans<<endl;
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