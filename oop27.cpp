#include<iostream>
using namespace std;
namespace operations
{
	int sum(int x,int y)
	{
		return x+y;
	}
	int sub(int x,int y)
	{
		return x-y;
	}
	int divide(int x,int y);
	int multiply(int x,int y);
}
int operations::divide(int x,int y)
{
	return x/y;
}
int operations::multiply(int x,int y)
{
	return x*y;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers "<<endl;
	cin>>a>>b;
	using namespace operations;
	cout<<"Sum = "<<sum(a,b)<<"\n";
	cout<<"Difference = "<<sub(a,b)<<"\n";
	cout<<"Division = "<<divide(a,b)<<"\n";
	cout<<"Multiplication = "<<multiply(a,b)<<"\n";
	return 0;
}
