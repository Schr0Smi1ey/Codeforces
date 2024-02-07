#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int n,x;
    cin>>n;
    vector<int> one;
    vector<int> two;
    vector<int> three;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==1) one.push_back(i+1);
        else if(x==2) two.push_back(i+1);
        else three.push_back(i+1);
    }
    int min_team = min({one.size(),two.size(),three.size()});
    cout<<min_team<<endl;
    if(min_team==0)
    return;
    int i=0;
    while(min_team--)
    {
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
        i++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}