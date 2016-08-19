#include <iostream>
using namespace std;
int main()
{
	int a=323;
	int b=2;
	while (b<=a){
		if (a%b==0)
			break;
		b++;
	}
	cout<<b<<endl;
}
