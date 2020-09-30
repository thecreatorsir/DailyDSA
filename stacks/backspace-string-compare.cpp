class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string ans1{};
        string ans2{};
        for(auto x:S){
            int flag = 0;  
            if(x=='#'){
                if(ans1.length()!=0)
                     ans1.pop_back();
              flag = 1;
            } 
            if(flag==0)
            ans1.push_back(x);
        }
         for(auto x:T){
            int flag = 0;  
            if(x=='#'){
                if(ans2.length()!=0)
                  ans2.pop_back();
              flag = 1; 
            } 
            if(flag==0)
            ans2.push_back(x);
         }
        cout<<ans1<<" "<<ans2<<endl;
         if(ans1!=ans2) return false;
        else return true;
    }
 
};
