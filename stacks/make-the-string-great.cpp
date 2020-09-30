class Solution {
public:
    string makeGood(string s) {
      reverse(s.begin(),s.end());
        stack <char> st;
        int n = s.length(); 
        
        char goodstr[100] = "";
        for(int i=0;i<n;i++){
            int flag = 0;
            while(!st.empty() and abs(st.top()-s[i])==32){
                st.pop();
                flag = 1;
                break;
            }
            if(flag==0)
             st.push(s[i]);
        }
        int i=0;
        while(!st.empty()){
            goodstr[i] = st.top();
            st.pop();
            i++;
        }
       return goodstr; 
   
    }
};
