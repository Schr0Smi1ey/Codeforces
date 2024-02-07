#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[7], flag;
    
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    
    int i = 0;
    while (n != 0) {
        n -= arr[i % 7];
        if (n <= 0) {
            flag = i % 7;
            break;
        }
        i++;
    }
    
    cout << flag + 1 << endl;
    return 0;
}
