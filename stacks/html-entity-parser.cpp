class Solution {
public:
    string entityParser(string text) {
        int n = text.length();
        string ans = "";
       unordered_map <string,char> m;
        m["&quot;"] ='"';
        m["&amp;"] ='&';
        m["&gt;"] = '>';
        m["&lt;"] = '<';
        m["&frasl;"] = '/';
            
        for(int i=0;i<n;i++){
            
            if(text[i]=='&'){
                
                string s = "";
                while(i<n && text[i]!=';'){
                    s+= text[i];
                    i++;
                }
                s+=';';
                if(m.find(s)!=m.end()){
                   ans+=m[s]; 
                }
                else if(s=="&apos;"){
                    ans+="'";
                }
                else{
                    ans+=s;
                }
            }else{
                ans+=text[i];
            }
        }
        return ans;
    }
};
