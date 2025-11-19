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

        int c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 1)
                c1++;
            else if (a == 2)
                c2++;
            else if (a == 3)
                c3++;
        }

        int ans = min(c1, c3) + max(0, c2 - 1);
        cout << ans << "\n";
    }

    return 0;
}
