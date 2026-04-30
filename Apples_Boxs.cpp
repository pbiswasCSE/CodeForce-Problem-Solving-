// S.I.N.I.S.T.E.R //

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define all(s) s.begin(), s.end()

typedef long long ll;
const double pi = acos(-1), ef = 1e-9;
const ll N = 5e5 + 5, M = 1e9 + 7, H = 131;

int main() {
    fast;

    ll tc;
    cin >> tc;
    while (tc--) {
        int n, k, sum = 0;
        cin >> n >> k;

        vector<int> s(n);
        int x = INT_MIN;  
        int y = INT_MAX; 

        for (int i = 0; i < n; i++) {
            cin >> s[i];
            sum += s[i];
            x = max(x, s[i]);
            y = min(y, s[i]);
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == x) cnt++;
        }

        if (x - y > k + 1 || (x - y == k + 1 && cnt > 1))
            cout << "Jerry" << endl;
        else {
            if (sum % 2 != 0)
                cout << "Tom" << endl;
            else
                cout << "Jerry" << endl;
        }
    }

    return 0;
}
