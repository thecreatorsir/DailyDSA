class Solution{
     int sum = 0;
public:
    int count(int N){
       int n = N/2;
       return solve(n);
    }
    int solve(int n){
        if(n==0 || n==1)
         return 1;
    int sum =0;     
    for(int i=n-1;i>=0;i--){
        sum += solve(i)*solve(n-1-i);
    }
     return sum;    
    }
};
