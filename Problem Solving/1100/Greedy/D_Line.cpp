#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
void solution(){
    int n;cin >> n;
    string str;cin >> str;
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<n;i++){
        if(str[i] == 'L'){
            if(i-0 < n-i-1){
                pq.push({n-i-1,i});
            }
        }
        else{
            if(n-i-1 < i){
                pq.push({i,n-i-1});
            }
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += (str[i] == 'L')?i:n-i-1;
    }
    for(int i=0;i<n;i++){
        int temp = sum;
        if(pq.size() == 1){
            temp += pq.top().first;
            temp -= pq.top().second;
        }
        else if(!pq.empty()){
            auto x = pq.top();
            temp += pq.top().first;
            temp -= pq.top().second;
            pq.pop();
            auto y = make_pair(pq.top().first+x.first,pq.top().second+x.second);
            pq.pop();
            pq.push(y);
        }
        cout << temp << " ";
    }
    cout << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}

// Optimization : 

#include <bits/stdc++.h>
using namespace std;
void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	long long tot = 0;
	vector<long long> v;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {
			v.push_back((n - 1 - i) - i);
			tot += i;
		}
		else {
			v.push_back(i - (n - 1 - i));
			tot += n - 1 - i;
		}
	}
	sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i < n; i++) {
		if (v[i] > 0) {tot += v[i];}
		cout << tot << ' ';
	}
	cout << '\n';
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}