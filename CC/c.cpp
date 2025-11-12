#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> P(n);
        for (int i = 0; i < n; ++i)
            cin >> P[i];
        int total = 0;
        vector<bool> left(n, false);
        for (int num = n; num >= 1; --num)
        {
            int j = find(P.begin(), P.end(), num) - P.begin();
            int left_disturb = 0, right_disturb = 0;

            for (int i = j - 1; i >= 0; --i)
                if (!left[i])
                    left_disturb++;

            for (int i = j + 1; i < n; ++i)
                if (!left[i])
                    right_disturb++;
            total += min(left_disturb, right_disturb);
            left[j] = true;
        }
        cout << total << endl;
    }
    return 0;
}