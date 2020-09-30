class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans(nums1.size(),-1);      
        stack <int> s;
        map <int,int> mapping;
        
        for(int i=0;i<nums2.size();i++){
            
            while(!s.empty() and nums2[i]>s.top()){
                mapping[s.top()] = nums2[i];
                s.pop();
            }
            
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
          if(mapping.find(nums1[i])!= mapping.end()){
              ans[i]=mapping[nums1[i]];
          }  
        }
        return ans;
    }
};
