#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		bool ok = true;
		for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] == 'E' && s[i + 1] == 'C') {
				ok = false;
			} else if (s[i] == 'S' && s[i + 1] == 'C') {
				ok = false;
			} else if (s[i] == 'S' && s[i + 1] == 'E') {
				ok = false;
			}
			if (ok == false) {
				break;
			}
		}
		if (ok == true) {
			cout << "yes";
		} else {
			cout << "no";
		}
		cout << '\n';
	}
}
