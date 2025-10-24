#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    while (b)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> players;
        for (int i = 1; i <= n; ++i)
            players.push_back({gcd(i, n), i});
        sort(players.begin(), players.end(), [](pair<int, int> a, pair<int, int> b)
             {
            if (a.first != b.first) return a.first > b.first;
            return a.second < b.second; });
        for (auto p : players)
            cout << p.second << " ";
        cout << endl;
    }
    return 0;
}