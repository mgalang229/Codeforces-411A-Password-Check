#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	// create a boolean vector that maintains 4-indices of boolean elements
	vector<bool> complexity_checker(4, false);
	// the first boolean element will only be true if the size of the string is >= 5
	complexity_checker[0] = ((int) s.size() >= 5 ? true : false);
	for (int i = 0; i < (int) s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			// the second boolean element will be true if there is at least 1 large English letter
			complexity_checker[1] = true;
		} else if (s[i] >= 'a' && s[i] <= 'z') {
			// the third boolean element will be true if there is at least 1 small English letter
			complexity_checker[2] = true;
		} else if (s[i] >= '0' && s[i] <= '9') {
			// the fourth boolean element will be true if there is at least 1 digit
			complexity_checker[3] = true;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (!complexity_checker[i]) {
			// check if all the values are true, and if there is a false element(s)
			// then this code block will be executed
			cout << "Too weak\n";
			return 0;
		}
	}
	// otherwise, print 'Correct' since it matches the complexity
	cout << "Correct\n";
	return 0;
}
