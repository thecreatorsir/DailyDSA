class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector <int> v(T.size(),0);
        stack <int> s;
        //traversing the list
        int i=0;
        while(i<T.size()){
            while(!s.empty() && T[s.top()]<T[i]){
                v[s.top()]=i-s.top();
                s.pop();
            }
            s.push(i);
            i++;
        }
      
        return v;
    }
};
