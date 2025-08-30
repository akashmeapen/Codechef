#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n==0) {
            cout << 0 << endl;
            continue;
        }
        int sum =1;
        for (int i = 1; i < n; i++) {
            if (a[i] % 2 != a[i-1] % 2) {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}