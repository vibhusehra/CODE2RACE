#include<iostream>

using namespace std;

//the answer will always be 2^n - 1
//as n<=18, integer can easily fit 2^18.
// findCombinations(int) has time complexity of O(logn).

int findCombinations(int n)		//2^n
{
	if(n==0)
		return 1;
	if(n%2==0){
		int y = findCombinations(n/2);
		return y*y;
	}
	return 2*findCombinations(n-1);		
}

int main()
{
	int n;
	cin>>n;
	
	cout<<findCombinations(n)-1<<endl;		// number of combinations will always be 2^n - 1;
}
