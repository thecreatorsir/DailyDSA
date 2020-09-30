class Solution {
public:
    string removeOuterParentheses(string S) {
     
        string ans{};
        int outer = 0; 
        for(auto s:S){
            if(s=='('){
                outer++;
                if(outer!=1) ans.push_back(s);
            }
            else{
                outer--;
                if(outer!=0) ans.push_back(s); 
            }
        }
        return ans;
    }
};
