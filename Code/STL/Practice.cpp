#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < (1 << n); ++i) {
        vector<long long> p(n);
        vector<bool> used(n, false);
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) {
                p[j] = a[count++];
            }
        }
        for (int j = 0; j < n; ++j) {
            if (!((i >> j) & 1)) {
                p[j] = a[count++];
            }
        }
        
        vector<long long> c(n);
        for (int j = 0; j < n; ++j) {
            c[j] = p[j] + b[j];
        }

        set<long long> distinct_elements(c.begin(), c.end());
        if (distinct_elements.size() >= 3) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        if (solve()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}