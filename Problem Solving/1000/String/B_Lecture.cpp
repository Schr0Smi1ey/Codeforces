#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char str[n][11];
    char first[m][11];
    char second[m][11];
    for (int i = 0; i < m; i++) {
        scanf("%s", first[i]);
        scanf("%s", second[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        // Constructing the note
        for (int j = 0; j < m; j++) { // Will iterate through the first string
            if (strcmp(str[i], first[j]) == 0) { // When got matches
                if (strlen(second[j]) < strlen(first[j])) { // Will compare with the second one
                    strcpy(str[i], second[j]); // If second one of less than first will replace the string
                    break; // Then will break .....this will save time
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s ", str[i]); // Finally print the note...after the modification
    }
    return 0;
}
