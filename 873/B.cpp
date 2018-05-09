#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(2*n + 2, -11);
    int val = n;
    int sol = 0;
    v[n] = -1;

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            val--;
        }
        else {
            val++;
        }

        if(v[val] == -11) {
            v[val] = i;
        }
         else {
            sol = max(sol, i - v[val]);
        }
    }
    cout << sol;
    return
