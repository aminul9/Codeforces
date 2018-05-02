
#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	string s;
	cin >> n >> s;
	if (n == 1) {
		cout << s << endl;
	} else {
		int cnt0 = 0;
		for (int i = 0; i < n; ++i)
			 if(s[i] == '0')
                cnt0 ++;
		cout << 1;
		for (int i = 0; i < cnt0; ++i)
			cout << 0;
		cout << endl;
	}

	return 0;
}
