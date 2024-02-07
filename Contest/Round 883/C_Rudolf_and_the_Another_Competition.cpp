// #include<bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define int long long int
// #define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
// #define getbit(n,i) (((n) & (1LL << (i))) !=0)
// class Rank
// {
//     public:
//         int point;
//         int penalty;
//         string name;
// };
// bool cmp1(Rank a,Rank b)
// {
//     if(a.point>b.point)
//     return true;
//     else
//     return false;
// }
// bool cmp2(Rank a,Rank b)
// {
//     if(a.penalty<b.penalty)
//     return true;
//     else
//     return false;
// }
// void solution()
// {
//     int n,m,h,i=0,x;cin>>n>>m>>h;
//     Rank part[n];
//     while(n--)
//     {
//         priority_queue<int,vector<int>,greater<int>> minimum;
//         int penalty = 0,points=0,temp = 0;
//         for(int j=0;j<m;j++)
//         {
//             cin>>x;
//             minimum.push(x);
//         }
//         while(!minimum.empty())
//         {
//             if((penalty+(minimum.top()+temp)>h))
//             break;
//             penalty+=(minimum.top()+temp);
//             temp = minimum.top();
//             points++;
//             minimum.pop();
//         }
//         part[i].point=points;
//         part[i].penalty=penalty;
//         if(i==0)
//         part[i].name = "rudolf";
//         else
//         part[i].name = "xc";
//         i++;
//     }
//     sort(part,part+n,cmp1);
//     for(int k=0;k<n;k++)
//     {
//         if(part[k].name=="rudolf")
//         cout<<k+1<<endl;
//     }
// }
// signed main()
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
// #define int long long int
// #define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
// #define getbit(n,i) (((n) & (1LL << (i))) !=0)
// class Rank
// {
//     public:
//         int point;
//         int penalty;
//         string name;
// };
// bool cmp1(Rank a, Rank b)
// {
//     if (a.point > b.point)
//         return true;
//     else
//         return false;
// }
// bool cmp2(Rank a, Rank b)
// {
//     if (a.penalty < b.penalty)
//         return true;
//     else
//         return false;
// }
// void solution()
// {
//     int n, m, h, x;
//     cin >> n >> m >> h;
//     Rank part[n];
//     int originalN = n; // Store the initial value of n
//     for (int i = 0; i < originalN; i++) // Iterate over the initial value of n
//     {
//         priority_queue<int, vector<int>, greater<int>> minimum;
//         int penalty = 0, points = 0, temp = 0;
//         for (int j = 0; j < m; j++)
//         {
//             cin >> x;
//             minimum.push(x);
//         }
//         while (!minimum.empty())
//         {
//             if ((penalty + (minimum.top() + temp) > h))
//                 break;
//             penalty += (minimum.top() + temp);
//             temp = minimum.top();
//             points++;
//             minimum.pop();
//         }
//         if(penalty==h)
//         {
//             penalty+=h;
//             points++;
//         }
//         part[i].point = points;
//         part[i].penalty = penalty;
//         if (i == 0)
//             part[i].name = "rudolf";
//         else
//             part[i].name = "xc";
//     }
//     sort(part, part + originalN, cmp1);
//     int ans;
//     for (int i = 0; i < originalN; i++) // Iterate over the initial value of n
//     {
//         // cout<<part[i].point<<" "<<part[i].penalty<<endl;
//         if (part[i].name == "rudolf")
//         {
//             ans = i;
//             break;
//         }
//         // cout<<part[i].point<<" "<<part[i].penalty<<endl;
//     }
//     if(ans!=0)
//     {
//         cout<<++ans<<endl;
//         return;
//     }
//     else
//     {
//         bool flag = true;
//         for(int i = 0; i < originalN; i++) // Iterate over the initial value of n
//         {
//             if(i==ans)
//             continue;
//             if(part[ans].point==part[i].point)
//             {
//                 flag=false;
//             }
//             else
//             {
//                 part[i].penalty = INT_MAX;
//             }
//         }
//         if(flag)
//         {
//             cout<<ans+1<<endl;
//             return;
//         }
//         sort(part, part + originalN, cmp2);
//         for(int i = 0; i < originalN; i++) // Iterate over the initial value of n
//         {
//             if (part[i].name == "rudolf")
//             {
//                 cout<<i+1<<endl;
//                 return;
//             }
//             // cout<<part[i].point<<" "<<part[i].penalty<<endl;
//         }
//     }
// }
// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solution();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n,m,h,x;cin>>n>>m>>h;
    vector<pair<pair<int,int>,int>> v;
    for(int i=0;i<n;i++)
    {
        int penalty = 0, points = 0, temp = 0;
        int arr[m];
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+m);
        for(int i=0;i<m;i++)
        {
            temp+=arr[i];
            if(temp<=h)
            {
                penalty+=temp;
                points++;
            }
            else
            break;
        }
        v.push_back({{-points,penalty},i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i].second==0)
        {
            cout<<++i<<endl;
        }
    }
}
signed main()
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