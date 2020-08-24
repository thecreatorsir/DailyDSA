#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, c;
        cin >>s >> c;
        int count = 0, flag = 1, n = s.length(), k = c.length();
        int count1[127] = {0}, count2[127] = {0};
        for (int i = 0; i < k; i++)
        {
            count1[s[i]]++;
            count2[c[i]]++;
        }
        for (int i = 0; i < 127; i++)
        {
            if ((count1[i] != count2[i]))
            {
                flag = 0;
            }
        }
        if (flag)
            count++;
        for (int i = k; i < n; i++)
        {
            flag = 1;
            count1[s[i]]++;
            count1[s[i - k]]--;
            for (int i = 0; i < 127; i++)
            {
                if ((count1[i] != count2[i]))
                    flag = 0;
            }
            if (flag)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
