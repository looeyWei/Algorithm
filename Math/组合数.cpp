#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;

ll C(int n, int m) {
    /*
     * 计算组合数C(n,m)
     */
    ll res = 1;
    for (int i = 1; i <= m; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}
int main() {
    cin >> n >> m;
    cout << C(n, m) << endl;
    return 0;
}