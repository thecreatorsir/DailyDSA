#include <iostream>
#include<stack>
using namespace std;
typedef long long int ll;
int v = 0;
void decode(string str, int i){
    int rev;
    if (str[i] == '[')
      decode(str, i+1);
  
    else if ( str[i] == ']' || i == str.length())
      return;

    else if (str[i] >= '0' && str[i] <= '9'){
        rev = 0;
        while (str[i] >= '0' && str[i] <= '9'){
            rev = rev * 10 + str[i] - '0';
            i++;
        }
        v = i;
        while (rev--)
           decode(str, i);
    
        if (i >= v)
        {
            while ( str.length() != i && str[i] != ']')
            i++;
         
            decode(str, i + 1);
        }
    }
    else{
        cout << str[i];
        decode(str, i + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        string str;
        cin >> str;
        decode(str, 0);
        cout<<endl;
    }
}
