// S.I.N.I.S.T.E.R //

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define all(s) s.begin(),s.end()
typedef long long ll;
const double pi = acos(-1),ef=1e-9;
const ll N=5e5+5,M=1e9+7,H=131;
int d(int y) {
	int ans = 0;
	while(y) {
		ans += y % 10;
		y /= 10;
	}
	return ans;
}
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
 
	int tc; cin >> tc;
	while(tc--) {
		int x; cin >> x;
		int cnt = 0;
		for(int y = x; y < x + 100; y++) {
			if(y - d(y) == x) {
				cnt++;
			}
		}
		cout << cnt << "\n";
	}
 
	return 0;
}