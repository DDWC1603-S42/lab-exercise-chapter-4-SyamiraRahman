//NURUL SYAMIRA BINTI ABDUL RAHMAN
//A17DW3145
//Find the sum of digits of a given number

#include <iostream>
using namespace std;

int main()
{

	int no1,no2,x,sum;

	cout<<"Find the sum of a given number"<<endl;
	cout<<"------------------------------"<<endl;

	cout<<"Input number: "<<endl;
	cin>> no1 >> no2;


	sum = no1+no2 ;
	cout<< "The sum of the digit is :"<<sum<<endl;
	
	while(no2>0)
	{
	r=no1%10;
	no1=no1/10;
	sum=sum+r;
	
	}
}
	return 0;
