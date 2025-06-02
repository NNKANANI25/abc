
#include<iostream>
using namespace std;

class customer
{
	public:
	int id;
	char name[50];
	int age;
	char city[50];
	int mobile_number;
	int simcard_velidity;
	char telecom_brand_name[50];
	
	void setData()
	{
		cout<<"id: ";
		cin>>id;
		cout<<"name:";
		cin>>name;
		cout<<"age:";
		cin>>age;
		cout<<"city:";
		cin>>city;
		cout<<"mobile_number:";
		cin>>mobile_number;
		cout<<"simcard_velidity:";
		cin>>simcard_velidity;
		cout<<"telecom_brand_name:";
		cin>>telecom_brand_name;
	}
	
	void getData()
	{
		cout<<"id"<<id<<endl
		<<"name:"<<name<<endl
		<<"age:"<<age<<endl
		<<"city:"<<city<<endl
		<<"mobile_number:"<<mobile_number<<endl
		<<"simcard_velidity:"<<simcard_velidity<<endl
		<<"telecom_brand_name:"<<telecom_brand_name<<endl;
	}
};
int main()
{
	customer c1,c2,c3,c4,c5;
	c1.setData();
	c1.getData();
	c2.setData();
	c2.getData();
	c3.setData();
	c3.getData();
	c4.setData();
	c4.getData();
	c5.setData();
	c5.getData();
	
}
