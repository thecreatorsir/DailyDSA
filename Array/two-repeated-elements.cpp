#include<bits/stdc++.h>
using namespace std;

void func(vector<int> v, int n) {
    
    int var = 0;
    for (int i = 0; i < n + 2; i++) {
        var = abs(v[i]);
        if (v[var - 1] < 0) {
            cout << var << " ";
        }
        
        else {
            v[var - 1] = -v[var - 1];
        }
    }
    cout << endl;
}

int main() {
    int t = 0;
    cin >> t;
    
    int n = 0;
    while (t-- > 0) {
        cin >> n;
        
        vector<int> v(n + 2);
        for (int i = 0; i < n + 2; i++) {
            cin >> v[i];
        }
        
        func(v, n);
    }
	return 0;
}
