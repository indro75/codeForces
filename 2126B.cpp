#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

     while(n!=0){
        cout<<n<<" ";

     if(n == 1) {
                break;
        }
        if (n % 2 == 0) {
                n = n / 2;
            }
            else {
                n = n * 3 + 1;
            }
     }
    cout<<endl;

    }
}
