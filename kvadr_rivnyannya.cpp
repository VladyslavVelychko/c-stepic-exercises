#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a=0;
	int b=0;
	int c=0;
	double d=0;
	double re=0;
	double im=0;
	double i=0;
	cout<<"Введите коэффициенты a,b,c:"<<endl;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	i=sqrt(-1);
	re=(-b)/(2*a);
	im=(i*sqrt(d))/(2*a);
	if (d>=0) {
		cout<<((-b+sqrt(d))/(2*a))<<" "<<((-b-sqrt(d))/(2*a))<<endl;
	} else if (d<0) {
		cout<<re<<"+-"<<im<<endl;
	}
	return 0;
}
