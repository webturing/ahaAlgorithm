#include<bits/stdc++.h>

using namespace std;

using ll=long long;
#define endl '\n'
#define FOR(i, x, y) for (decay<decltype(y)>::type i = (x), _##i = (y); i < _##i; ++i)
#define FORD(i, x, y) for (decay<decltype(x)>::type i = (x), _##i = (y); i > _##i; --i)
const int maxn = 100000 + 10;
char sta[maxn], top = -1;
char str[maxn], str1[maxn];
int i, j, n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> str;

    top = -1;
    memset(sta, 0, sizeof(sta));
    memset(sta, 0, sizeof(str1));
    for (i = 0; i < strlen(str); i++) {
        sta[++top] = str[i];
    }
    j = 0;
    while (top != -1) {
        str1[j++] = sta[top--];
    }
    if (strcmp(str, str1) == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}