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

    cin >> n;
    for (i = 0; i < n; i++){
        cin >> a[i];
    }

    for (i = n - 2; i >= 0; i--) {
        for (j = i; j >= 0; j--) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }

    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}