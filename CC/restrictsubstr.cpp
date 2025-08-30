#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 2) {
            cout << "aa" << endl;
        } else if (n == 4) {
            cout << "abaa" << endl;
        } else {
            string pattern = "abc";
            for (int i = 0; i < n; ++i) {
                cout << pattern[i % 3];
            }
            cout << endl;
        }
    }
}