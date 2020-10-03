class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        int n=num.length();
        int i=0;
        while(i<n and k>0)
        {
            if(s.empty())
                s.push(num[i]);
            else
            {
                while(!s.empty() and s.top()>num[i] and k>0)
                {
                    s.pop();
                    k--;
                }
                s.push(num[i]);
            }
            i++;
        }
        while(i<n)
        {
            s.push(num[i]);
            i++;
        }
        string ans="";
        while(!s.empty())
        {
            ans+=s.top();
            s.pop();
        }
        i=0;
        reverse(begin(ans),end(ans));
        while(ans[i]=='0')
            i++;
        ans=ans.substr(i);
        ans=ans.substr(0,ans.length()-k);
        if(ans.length()==0)return "0";
        return ans;
    }
};
