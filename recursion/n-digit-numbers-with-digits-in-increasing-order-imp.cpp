
 // } Driver Code Ends


//User function Template for C++
class Solution
{
public:
    vector<int> increasingNumbers(int N)
    {   int start = 0;
        vector <int> v;
        if(N>1)
         start = 1;
        findStrictlyIncreasingNum(start, "", N,v); 
        return v;
      
    }
    void findStrictlyIncreasingNum(int start, string out, int n,vector <int> &v) 
{ 

    if (n == 0) 
    {  
        v.push_back(stoi(out));
        return; 
    } 
    for (int i = start; i <= 9; i++) 
    { 
        string str = out + to_string(i); 
        findStrictlyIncreasingNum(i + 1, str, n - 1,v); 
    } 
} 
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.increasingNumbers(N);
        for(auto num : ans){
            cout<< num <<" ";
        }
        cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends
