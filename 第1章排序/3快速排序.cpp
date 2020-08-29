#include<bits/stdc++.h>

using namespace std;

using ll=long long;
#define endl '\n'
#define FOR(i, x, y) for (decay<decltype(y)>::type i = (x), _##i = (y); i < _##i; ++i)
#define FORD(i, x, y) for (decay<decltype(x)>::type i = (x), _##i = (y); i > _##i; --i)
const int maxn = 1000;

int a[maxn], n, i, j, t;

void quick_sort(int a[], int left, int right) {
    if (left >= right)return;
    int temp = a[left];
    i = left;
    j = right;
    while (i < j) {
        while (a[j] >= temp && i < j)j--;
        while (a[i] <= temp && i < j)i++;
        if (i < j) {
            swap(a[i], a[j]);
        }
    }
    a[left] = a[i];
    a[i] = temp;
    quick_sort(a, left, i - 1);
    quick_sort(a, i + 1, right);


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    quick_sort(a, 0, n - 1);

    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}