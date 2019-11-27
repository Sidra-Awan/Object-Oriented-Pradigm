#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<< "Enter 1st number"<<endl;
	cin>>a;
	cout<< "Enter 2nd number "<<endl;
	cin>>b;
	if(a%b==0)
	{
		cout<<a<<" is multple of "<<b;
	} 
	else{
		cout<<"Not multiple of each other";
	}
	return 0;
}
