#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int strength_j = a[j - 1];
        int stronger = 0;
        for (int i = 0; i < n; ++i)
            if (a[i] > strength_j)
                stronger++;

        if (stronger > n - k)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
