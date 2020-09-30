class Solution {
public:
    string removeDuplicates(string S) {
        reverse(S.begin(),S.end());
        int n = S.length();
        stack <char> s;
        
        for(int i=0;i<n;i++){
            int flag = 0;
            while(!s.empty() and s.top()==S[i]){
                flag = 1;
                s.pop();
            }
            if(flag==0)
            s.push(S[i]);
        }
        string newstr = "";
        newstr.resize(s.size());
        int i = 0;
        while(!s.empty()){
            newstr[i] = s.top();
            s.pop();
            i++;
        }
     
        return newstr;
    }
};
