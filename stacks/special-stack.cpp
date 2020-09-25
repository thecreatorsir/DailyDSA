#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}// } Driver Code Ends


/*Complete the function(s) below*/
void push(int a)
{
     s.push(a);
}

bool isFull(int n)
{
     if(s.size()==n)
     return true;
}

bool isEmpty()
{
    if(s.size()==0)
    return true;
}

int pop()
{
    s.pop();
}

int getMin()
{ int mini = s.top();
pop();
   while(!isEmpty()){
      mini = min(mini,s.top());
      pop();
   }
   return mini;
}
