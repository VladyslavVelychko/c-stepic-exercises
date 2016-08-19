#include <iostream>
using namespace std;
int count=0;
int foo(int n){
	
	if (n<=0) return 1;
	return foo((n*2)/3) + foo(n-2);
	count++;
	cout<<count<<endl;
}
int main()
{
	foo(3);
	cout<<count<<endl;
	return 0;
}
