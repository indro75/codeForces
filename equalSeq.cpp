#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string res(k, '1');
        res += string(n - k, '0');
        cout << res << '\n';
    }
    return 0;
}

