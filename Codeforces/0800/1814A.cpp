#include <bits/stdc++.h>
using namespace std;

void solve() {
   long long int n, k;
   cin >> n >> k;
    
    if (n % 2 == 0 || (n - k) % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
