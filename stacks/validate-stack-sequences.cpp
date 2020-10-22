class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int n = pushed.size();
        int inx = 0;
        for(int i=0; i < n; i++){   
              s.push(pushed[i]);
            while(!s.empty() && s.top() == popped[inx]){
                s.pop();
                inx+=1;
            } 
        }
        if(s.empty()) return true;        
        return false;
    }

