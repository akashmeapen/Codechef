#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> v(n), d(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) cin >> d[i];
    
    priority_queue<pair<long long, long long>> pq;
    
    for (int i = 0; i < n; i++) {
        pq.push(make_pair(v[i], d[i]));
    }
    
    long long total = 0;
    
    for (int i = 0; i < m; i++) {
        long long val = pq.top().first;
        long long dec = pq.top().second;
        pq.pop();
        
        if (val <= 0) break;
        
        total += val;
        pq.push(make_pair(val - dec, dec));
    }
    
    cout << total << endl;
    
    return 0;
}