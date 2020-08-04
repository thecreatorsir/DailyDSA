#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int pat[n];
        for (int i=0; i < n; i++) 
           cin >> pat[i];
        int k;
        cin >> k;
        int count = 0;
        bool flag = false;
        int len = 0;
        for (int i=0; i < n; i++) {
            if (pat[i] == k) flag = true;
            if (pat[i] < k+1) len ++;
            else {
                if (flag) {
                    count += len;
                    flag = false;
                }
                len = 0;
            }
        }
        if (flag) count += len;
        cout << count << "\n";
    }
    return 0;
}
