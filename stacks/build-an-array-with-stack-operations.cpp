class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       vector <string> s;
        int count = 0;
        for(int i=1;i<=n and count<target.size();i++){
            s.push_back("Push");
            if(target[count]==i){
                count++;
            }
            else{
                s.push_back("Pop");
            }
        }
    
        return s;
    }
};
