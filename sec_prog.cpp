#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	double d;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if (d==0){
		cout<<((-b)/(2*a))<<" "<<((-b)/(2*a))<<endl;
	} else if (d>0){
		cout<<(-b+sqrt(d))/(2*a)<<" "<<(-b-sqrt(d))/(2*a);
	} else {
		cout<<"No real roots"<<endl;
	}
	return 0;
}
