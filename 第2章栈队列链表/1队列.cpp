#include<bits/stdc++.h>

using namespace std;

using ll=long long;
#define endl '\n'
#define FOR(i, x, y) for (decay<decltype(y)>::type i = (x), _##i = (y); i < _##i; ++i)
#define FORD(i, x, y) for (decay<decltype(x)>::type i = (x), _##i = (y); i > _##i; --i)
const int maxn = 100000 * 2 + 10;
int que[maxn], head = 0, tail = 0;//que[head,tail)这个区间
int n, i, j, t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    head = tail = 0;
    for (i = 0; i < n; i++) {
        cin >> t;
        que[tail++] = t;

    }
    while (head < tail) {
        cout << que[head++];
        if (head == tail)break;
        que[tail++] = que[head++];

    }
    return 0;
}