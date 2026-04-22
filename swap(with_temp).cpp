#include<iostream>
using namespace std;
int main()
{
	int a=10, b=20, temp;
	cout<<"the values before swap:"<<a<<" and "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"the values after swap:"<<a<<" and "<<b;
	return 0;
}
