class Solution {
    map <string,vector<string>> m;
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector <string> temp;
        if(find(wordDict.begin(),wordDict.end(),s)!=wordDict.end()){
            temp.push_back(s);
        }
        if(m.find(s)!=m.end()){
            return m[s];
        }
        for(int i=1;i<=s.size();i++){
            string left = s.substr(0,i);
            if(find(wordDict.begin(),wordDict.end(),left)!=wordDict.end())
            for(string ss :wordBreak(s.substr(i),wordDict)){
             temp.push_back(left+" "+ss);   
            }
    
        }
        m[s]=temp;
         return temp;   
        
    }
};
