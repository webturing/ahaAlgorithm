#include<bits/stdc++.h>

using namespace std;

using ll=long long;
#define endl '\n'
#define FOR(i, x, y) for (decay<decltype(y)>::type i = (x), _##i = (y); i < _##i; ++i)
#define FORD(i, x, y) for (decay<decltype(x)>::type i = (x), _##i = (y); i > _##i; --i)
const int maxn = 1000;

int a[maxn], n, i, j, t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(a, 0, sizeof(a));
    cin >> n;//代表数组长度
    for (i = 0; i < n; i++) {
        cin >> t;
        a[t]++;
    }
    for (i = 0; i < maxn; i++) {
        for (j = 0; j < a[i]; j++) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}