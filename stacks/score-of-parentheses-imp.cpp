class Solution {
public:
    int scoreOfParentheses(string S) {
        stack <char> s;
        int count = 0;
        for(int i=0;i<S.length();i++){
            if(S[i]=='('){
                s.push(count);
                count = 0;
            }else{
                count = s.top() + max(2*count,1);
                s.pop();
            }
        }
        return count;
    }
};
