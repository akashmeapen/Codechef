#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int max = -1;
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            int d, t;
            cin >> d >> t;
            int s = d / t;
            if (s > max || (s == max && i < ans))
            {
                max = s;
                ans = i;
            }
        }
        cout << ans + 1 << "\n";
    }
    return 0;
}