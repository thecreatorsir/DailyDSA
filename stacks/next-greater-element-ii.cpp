class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int>S1;
        
        int size = nums.size();
        vector<int> result(nums.size(), -1);
        
        for(int i=0;i<nums.size();i++){            
            while(!S1.empty() && nums[S1.top()]<nums[i]){
                result[S1.top()] = nums[i];
                S1.pop(); // getting next greater elements. 
            }
            S1.push(i);
        }
        
        for(int i=0;i<nums.size();i++){            // second loop for circular structure. 
            while(!S1.empty() && nums[S1.top()]<nums[i]){
                result[S1.top()] = nums[i]; // when large element found, keep poping the the anti clock wise sub structure. 
                S1.pop();
            }
        }
        
        return result;     
    }
};
