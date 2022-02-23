#include <bits/stdc++.h>
using namespace std;
     
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int64_t n, ans = 0, i; cin >> n;
    for (i = ceil(sqrt(n)); i >= 1; i--) {
        if (n % i == 0) {
            ans = 2 * (i + n / i);
            break;
       }
    }
    cout << ans;
}
