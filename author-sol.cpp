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
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			int day, tastiness;
			// store the maximum tastiness on a specific day (note: only 1)
			cin >> day >> tastiness;
			mp[day] = max(mp[day], tastiness);
		}
		// find the largest and second largest tastiness value
		int largest = 0;
		int second_largest = 0;
		for (auto x : mp) {
			if (x.second >= largest) {
				second_largest = largest;
				largest = x.second;
			} else if (x.second > second_largest) {
				second_largest = x.second;
			}
		}
		// calculate the sum of the two values
		cout << largest + second_largest << '\n';
	}
	return 0;
}
