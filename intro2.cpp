#include <iostream>
using namespace std;

int main()
{
	int a,b,i;
	cout<<"enter the first number:";
	cin>>a;
	cout<<"enter the second number:";
	cin>>b;
	cout<<endl;	
	cout<<"leap year:";
	for(int i=a;i<=b;i++)
	{
		if(i%4==0)
		{
			cout<<i<<" ";
		}
	}
}
/*OUTPUT
enter the first number:2020
enter the second number:2040

leap year:2020 2024 2028 2032 2036 2040
*/
