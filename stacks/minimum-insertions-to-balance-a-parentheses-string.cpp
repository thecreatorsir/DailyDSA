class Solution {
public:
    int minInsertions(string s) {
     stack <char> t;
        int n = s.length();
        int ans = 0;
       for(int i=0;i<n;i++){
           if(s[i]=='('){
              t.push(s[i]);
          } 
           else
            {
             if((i < n && s[i+1] != ')') || i == n-1)
                {
                    if(!t.empty())
                    {
                        t.pop();
                        ans++;
                    }
                    else
                        ans+=2;
                }
        
           else if(i < n-1 && s[i+1] == ')')
                {
                    if(!t.empty())
                        t.pop();
                    else
                        ans++;                        
                    i++;
                }
           }
       }     
        if(t.size()!=0) ans += 2*t.size();
        
        return ans;
    }
};
