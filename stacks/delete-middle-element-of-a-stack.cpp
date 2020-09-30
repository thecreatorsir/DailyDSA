#include<bits/stdc++.h>
using namespace std;

stack<int> deleteMid(stack<int>s,int sizeOfStack,int current);

int main() {
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);
            
            
        }
        if(sizeOfStack==1)
        {
            cout<<myStack.top();
        }
        else
        {
        
            stack<int> modified=deleteMid(myStack,myStack.size(),0);
            
            
            while(!modified.empty())
            {
                cout<<modified.top()<<" ";
                modified.pop();
            }
        }
        cout<<endl;
        
    }   
	return 0;
}// } Driver Code Ends


//User function Template for C++
void solve(stack <int> &s,int k){
    if(k==1){
        return s.pop();
    }
    int temp = s.top();
    s.pop();
    solve(s,k-1);
    s.push(temp);
}



//You need to complete this function
stack<int> deleteMid(stack<int>s,int sizeOfStack,int current)
{   
    if(s.size()==0)
      return s;
    int k = sizeOfStack/2+1;
    solve(s,k);
    return s;
}



