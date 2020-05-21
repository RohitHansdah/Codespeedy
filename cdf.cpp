// Cumulitive Distribution function using error function
#include <iostream>
#include<math.h>
using namespace std;
//Normal Distribution function
double cdf(double value) 
{
    return erfc(-value / sqrt(2))/2;
}
int main() 
{
	// calling the cdf function
	double num,ans;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<num;
	ans=cdf(num);
	cout<<endl;
	cout<<"CDF : "<<ans<<endl;
	return 0;
}
