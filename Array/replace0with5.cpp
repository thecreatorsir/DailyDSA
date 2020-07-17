#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}

int convertFive(int n) {
int p = 1;
int num = 0;
while(n){
int rem = n%10;
if(rem == 0){
num = num + p*5;
}
else{
num = num + p*rem;
}
p = p*10;
n = n/10;
}
return num;
}


