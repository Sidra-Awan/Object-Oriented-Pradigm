#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter 5 digit number\t";
	cin>>a;
	cout<<a/10000<<"   ";
	a=a%10000;
	cout<<a/1000<<"   ";
	a=a%1000;
	cout<<a/100<<"   ";
	a=a%100;
	cout<<a/10<<"   ";
	a=a%10;
	cout<<a/1<<"   ";
	a=a%1;
	
	
	return 0;

	
}
