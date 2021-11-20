#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		vector<pair<int, int>> vec(n);
		for (int i = 0; i < n; i++) {
			int d, v;
			cin >> d >> v;
			vec[i] = make_pair(d, v);
		}
		// sort the dishes based on the tastiness in non-increasing order
		sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
			return a.second > b.second;
		});
		// find the two dishes with the highest tastiness that are not on the same day
		int prev = 0;
		int dish = 0;
		long long ans = 0;
		for (auto x : vec) {
			if (x.first != prev && dish < 2) {
				ans += x.second;
				prev = x.first;
				dish++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
