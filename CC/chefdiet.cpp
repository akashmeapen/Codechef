#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int prot = 0, flag = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] + prot >= k) {
                prot += arr[i] - k;
            } else if (flag == 0) {
                flag = i + 1;
                break;
            }
        }
        if (flag > 0)
            cout << "NO " << flag << endl;
        else
            cout << "YES" << endl;
    }
}