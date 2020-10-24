long long power(int N,int R)
{ int M = 1000000007;
  if(R==0)
   return 1;
  
  if(R%2!=0)
   return (power(N,R-1)*N)%M;
  else{
      long long temp = power(N,R/2)%M;
      return (temp*temp)%M;
  }
}

