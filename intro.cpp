#include<iostream>
using namespace std;

int main()
{
	int i;
	
	cout<<"enter array size: ";
	cin>>i;
	
	int arr[i];
	
	cout<<"enter the elements of the array: "<<endl;
	for(int j=0;j<i;j++)
	{
		cin>>arr[j];
	}
	
	cout<<"even number in the array are: ";
	for(int j=0;j<i;j++)
	{
		if(arr[j] % 2==0)
		{
			cout<<arr[j]<<" ";
		}
	}
	cout<<endl;
}
/*output
enter array size: 5
enter the elements of the array:
45
25
32
16
85
even number in the array are: 32 16
*/