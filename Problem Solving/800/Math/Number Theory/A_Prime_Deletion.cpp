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
    string s;cin >> s;
    if(s.find("1") > s.find("3")){
        cout << "31" << endl;
    }
    else{
        cout << "13" << endl;
    }
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

//Accepted 

// #include<bits/stdc++.h>
// using namespace std;
// #define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
// #define endl "\n"
// #define int long long int
// #ifdef KARIM
// #include "DEBUG_TEMPLATE.h"
// #else
// #define HERE
// #define debug(args...)
// #endif
// const int N = 2e5 +5;
// typedef pair<int,int> pii;
// bool prime(int n){
//     if(n % 2 == 0 || n % 3 == 0){
//         return false;
//     }
//     for(int i=5;i*i <= n;i+= 6){
//         if(n % i == 0 || n % (i+2) == 0){
//             return false;
//         }
//     }
//     return true;
// }
// bool test(int x){
//     if(prime(x)){
//         cout << x << endl;
//         return true;
//     }
//     return false;
// }
// void solution(){
//     string str;cin >> str;
//     bool fre[9];
//     memset(fre,true,sizeof(fre));
//     for(int i=0;i<str.size();i++){
//         if((str[i] - '0') % 2 == 0){
//             fre[i] = false;
//         }
//     }
//     for(int i=0;i<str.size();i++){
//         for(int k = i;k<str.size();k++){
//             string temp = "";
//             for(int j = i;j<str.size();j++){
//                 if(j == k) continue;
//                 temp += str[j];
//                 if(fre[j] && temp.size() >= 2){
//                     if(test(stoll(temp))) return;
//                 }
//             }
//         }
//     }
//     cout << -1 << endl;
// }

// int32_t main(){
//     #ifndef KARIM
//     fastio;
//     #endif
//     int t = 1;
//     cin>>t;
//     while(t--){
//         solution();
//     }
//     return 0;
// }