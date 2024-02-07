#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
bool isPalindrome(string str){
    int i=0,j=str.size()-1;
    while(i < j){
        if(str[i++] != str[j--]){
            return false;
        }
    }
    return true;
}
void solution(){
    string str;cin >> str;
    str.erase(2,1);
    string str1 = str;
    int n;cin >> n;
    int cnt = (isPalindrome(str))?1:0;
    while(true){
        string hour,minute;
        hour.push_back(str[0]);hour.push_back(str[1]);
        minute.push_back(str[2]);minute.push_back(str[3]);
        int h = stoll(hour),m = stoll(minute);
        int addH = n/60,addM = n%60;
        h += addH;m += addM;
        if(m >= 60){
            h++;m = m%60;
        }
        h = h%24;
        hour = (h < 10) ? '0' + to_string(h) : to_string(h);
        minute = (m < 10) ? '0' + to_string(m) : to_string(m);
        string resultant = hour + minute;
        if(resultant == str1){
            break;
        }
        if(isPalindrome(resultant)) {
            cnt++;
        }
        str = resultant;
    }
    cout << cnt << endl;
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