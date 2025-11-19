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
        int n, x;
        cin >> n >> x;

        int lower = 0, eq = 0, bigger = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a < x)
                lower++;
            else if (a == x)
                eq++;
            else
                bigger++;
        }

        if (eq > 0)
        {
            cout << "Yes\n";
        }
        else
        {
            if (lower == 0 || bigger == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
