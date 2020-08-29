#include<bits/stdc++.h>

using namespace std;

using ll=long long;
#define endl '\n'
#define FOR(i, x, y) for (decay<decltype(y)>::type i = (x), _##i = (y); i < _##i; ++i)
#define FORD(i, x, y) for (decay<decltype(x)>::type i = (x), _##i = (y); i > _##i; --i)
const int maxn = 1000+10;
int a[maxn], n, i, j, t, m = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(a, 0, sizeof(a));
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> t;
        a[t]++;
    }
    for (i = 0; i < maxn; i++) {
        if (a[i] != 0)++m;
    }
    cout << m << endl;
    for (i = 0; i < maxn; i++) {
        if (a[i] != -0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}