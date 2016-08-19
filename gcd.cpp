#include <iostream>
using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
	/*int maxi=0;
	cin>>a>>b;
	if (a>b){
		maxi=a%b;
		if (maxi==0){
			cout<<b;
		} else {
			a=maxi;
			gcd();
		}
	} else if (a<b){
		maxi=b%a;
		if (maxi==0){
			cout<<a;
		} else {
			b=maxi;
			gcd();
		}
	}*/
	//return 1;

	if (b==0) return a;
	return gcd(b,a%b);
}

int main()
{
	cout<<gcd(1071, 462);
	return 0;
}
