#include<iostream>
using namespace std;

int main()
{
	int a= 10;
	//Reference Variable
	int &b = a;  
	b = b + 1;

	cout<<a <<endl; // 11
	cout<< b  <<endl; //11

	a = 20;
	cout<<a<<" "<<b<<endl;

	return 0;
}