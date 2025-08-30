#include <iostream>
using namespace std;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    int cph = Y / X;
    int vehicles = (N + cph - 1) / cph;
    cout << vehicles << endl;
    return 0;
}