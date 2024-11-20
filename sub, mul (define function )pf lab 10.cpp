#include<iostream>
using namespace std;
int sum(int n,int m)
{
	int sum =n+m;
	cout<<"addition of two number in (sum function):"<<sum<<endl;}
void sub(int a,int b )
{
	int sub=a-b;
	
	cout<<" subtraction of two number  in (sub function ):"<<sub<<endl;

}
void multi(int x, int y)
{
double	multiply =x*y;
cout<<"multiply of two number in ( multi function ):"<<multiply<<endl;
}
int main()
{
	int a=5;
	int b= 5;
	cout<<"before  function's call:"<<endl<<"a is :"<<a<<endl<<"b is :"<<b<<endl;
	sub(a,b);
	sum(a,b);
	multi(a,b);
	
	return 0;
}